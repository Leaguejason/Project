using System;
namespace Models.Models
{
    public class EditCustomerModel
    {
        public long Id { get; set; }

        public string Name { get; set; } = null!;

        public int? Age { get; set; }

        public string? Gender { get; set; }

        public string? Address { get; set; }

        public int Status { get; set; }

        public string? Description { get; set; }

        public string? UpdatedBy { get; set; }
    }
}

