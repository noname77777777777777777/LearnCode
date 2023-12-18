using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuangLyNhanVien
{
    public class ChucVu : NhanVien
    {
        private string MachucVu;
        private float Hesoluong;
        public ChucVu() :base() {
            MachucVu = null;
            Hesoluong = 0.0f;
        }

        public ChucVu(string manhanvien,string hoten,string machucVu, float hesoluong):base(manhanvien,hoten)
        {
            MachucVu = machucVu;
            Hesoluong = hesoluong;
        }

        public string MachucVu1 { get => MachucVu; set => MachucVu = value; }
        public float Hesoluong1 { get => Hesoluong; set => Hesoluong = value; }
    }
}
