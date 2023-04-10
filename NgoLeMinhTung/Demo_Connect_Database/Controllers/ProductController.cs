using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Models.Entities;
using Models.Models;

namespace Demo_Connect_Database.Controllers
{
	public class ProductController : BaseController<ProductController>
	{
		public ProductController(PracticeDbContext contextP, ILogger<ProductController> logger, IConfiguration config)
			: base(contextP, logger, config){}

		[HttpGet("List")]
		public IActionResult GetList()
		{
			var result = _context.Products.ToList();
			return Ok(result);
		}

		[HttpGet("Details")]
		public IActionResult GetDetails([FromRoute] long id = 1)
		{
			var product = _context.Products.Find(id);
			if(product == null)
			{
				return BadRequest("Not found!");
			}
			return Ok(product);
		}

        [HttpPost]
        public IActionResult Create([FromQuery] Product model)
        {
            _context.Products.Add(model);
            var row_eff = _context.SaveChanges();

            return row_eff > 0 ? Ok(model) : BadRequest("Error!");
        }

        [HttpPut]
		public IActionResult Edit([FromBody] Product model)
		{
			var product = _context.Products.Find(model.Id);
			if(product == null) return NotFound("Not found!");

			product.Name = model.Name;
            product.Description = model.Description;
            product.UpdatedDate = DateTime.Now;
            product.UpdatedBy = model.UpdatedBy;
            product.ExpDate = model.ExpDate;
            product.Price = model.Price;
            product.Amount = model.Amount;
            product.Status = model.Status;

			_context.Products.Update(product);
			var row_eff = _context.SaveChanges();
			return row_eff > 0 ? Ok("Success!") : BadRequest("Failed!");
        }

        [HttpDelete]
        public IActionResult Delete([FromBody] long id)
        {
            var model = _context.Products.Find(id);
            if (model == null)
                return BadRequest("No data found");

            _context.Products.Remove(model);
            var row_eff = _context.SaveChanges();

            return row_eff > 0 ? Ok(model) : BadRequest("Error!");
        }
    }
}

