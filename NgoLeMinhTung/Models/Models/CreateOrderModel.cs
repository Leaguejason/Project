﻿using System;
namespace Models.Models
{
    public class CreateOrderModel
    {
        public long ProductId { get; set; }

        public long CustomerId { get; set; }

        public int Amount { get; set; }

        public decimal Price { get; set; }
    }
}

