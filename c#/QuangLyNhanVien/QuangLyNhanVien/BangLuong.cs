using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuangLyNhanVien
{
    public class BangLuong : ChucVu
    {
        private float luongCB;

        public BangLuong():base(){ 
            luongCB = 0;
        }
        public float LuongCB { get => luongCB; set => luongCB = value; }

        public BangLuong(string MaNhanvien, string Hoten, string MachucVu, float hesoluong, float luongCB):base(MaNhanvien, Hoten, MachucVu, hesoluong)
        {
            this.luongCB = luongCB;
        }
    }
}
