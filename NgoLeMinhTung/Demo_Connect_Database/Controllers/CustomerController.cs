using Demo_Connect_Database.Controllers;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Models.Entities;
using Models.Models;

namespace Demo_Connect_Database.Controllers
{
    public class CustomerController : BaseController<CustomerController>
    {
        public CustomerController(PracticeDbContext practiceDbContext, ILogger<CustomerController> logger, IConfiguration config)
            : base(practiceDbContext, logger, config) {}

        [HttpGet]
        public IActionResult GetList()
        {
            var result = _context.Customers.ToList();
            //var result = _context.Customers.Select(m => new CustomerModel()
            //{
            //    Id = m.Id,
            //    Name = m.Name,
            //    Address = m.Address,
            //    Status = m.Status,
            //    Age = m.Age,
            //    Debit = m.Debit,
            //    Description = m.Description,
            //    Gender = m.Gender,
            //    Username = m.Username
            //});
            return Ok(result);
        }

        [HttpGet("Details")]
        public IActionResult GetDetails([FromRoute] int id = 1)
        {
            var customer = _context.Customers.Find(id);
            if (customer == null)
            {
                return BadRequest("Not found!");
            }
            var order = from or in _context.Orders
                        join pr in _context.Products on or.ProductId equals pr.Id
                        where or.CustomerId == id
                        select new Product
                        {
                            Id = pr.Id,
                            Name = pr.Name,
                            Amount = or.Amount,
                            Price = or.Price,
                            Status = pr.Status,
                            Description = pr.Description,
                            ExpDate = pr.ExpDate,
                        };
            ;

            var result = new CustomerDetailModel()
            {
                Id = customer.Id,
                Name = customer.Name,
                Age = customer.Age,
                Gender = customer.Gender,
                Description = customer.Description,
                Debit = customer.Debit,
                Username = customer.Username,
                Status = customer.Status,
                Products = order.ToList(),
            };
            return Ok(result);
        }


        [HttpPut]
        public IActionResult Edit([FromBody] EditCustomerModel model)
        {
            var customer = _context.Customers.Find(model.Id);
            if (customer == null) return NotFound("Not found!");

            customer.Name = model.Name;
            customer.Address = model.Address;
            customer.Age = model.Age;
            customer.Status = model.Status;
            customer.Description = model.Description;
            customer.Gender = model.Gender;
            customer.UpdatedBy = model.UpdatedBy;
            customer.UpdatedDate = DateTime.Now;

            _context.Customers.Update(customer);
            var row_eff = _context.SaveChanges();
            return row_eff > 0 ? Ok("Success!") : BadRequest("Failed!");
        }

        [HttpPost("Customer")]
        public IActionResult Add([FromBody] CustomerModel model)
        {
            var customer = new Customer()
            {
                Name = model.Name,
                Age = model.Age,
                Address = model.Address,
                Username = model.Username,
                Status = model.Status,
                Gender = model.Gender,
                Description = model.Description,
                Debit = model.Debit,
            };
            _context.Customers.Add(customer);
            var eff = _context.SaveChanges();
            return eff > 0 ? Ok("Create success.") : BadRequest("Create Failed");
        }

        [HttpDelete]
        public IActionResult Delete([FromQuery] long id)
        {
            var customer = _context.Customers.Find(id);
            if (customer == null) return NotFound("Not found customer.");

            _context.Customers.Remove(customer);
            var eff = _context.SaveChanges();
            return eff > 0 ? Ok("Delete customer success.") : BadRequest("Delete Failed");
        }

        [HttpPost("Order")]
        public IActionResult CreateOrder([FromBody] CreateOrderModel model)
        {
            var dataCustomer = _context.Customers.Find(model.CustomerId);
            if (dataCustomer == null) return NotFound("Not found customer.");

            var dataProduct = _context.Products.Find(model.ProductId);
            if (dataProduct == null) return NotFound("Not found product.");

            var dataOrder = _context.Orders.Find(model.ProductId, model.CustomerId);
            if (dataOrder != null) return NotFound("Order already exist.");

            Order newOrder = new Order()
            {
                ProductId = model.ProductId,
                CustomerId = model.CustomerId,
                Price = model.Price,
                Amount = model.Amount,
                CreatedDate = DateTime.Now
            };

            _context.Orders.Add(newOrder);
            var eff = _context.SaveChanges();
            return eff > 0 ? Ok("Order success.") : BadRequest("Order failed.");
        }

    }
}
