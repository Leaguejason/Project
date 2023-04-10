using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.IdentityModel.Tokens;
using Models.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Models.Models;

namespace Demo_Connect_Database.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class BaseController<T> : ControllerBase
    {
        protected readonly PracticeDbContext _context;
        protected readonly ILogger<T> _logger;
        protected readonly IConfiguration _config;

        public BaseController(PracticeDbContext contextP, ILogger<T> logger, IConfiguration config)
        {
            _context = contextP;
            _logger = logger;
            _config = config;
        }
    }
}