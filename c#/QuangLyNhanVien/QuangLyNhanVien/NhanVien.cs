using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuangLyNhanVien
{
    public class NhanVien
    {
        private string MaNhanVien;
        private string Hoten;
        public NhanVien()
        {
            MaNhanVien = string.Empty;
            Hoten = string.Empty;
        }
        public NhanVien(string maNhanVien, string hoten)
        {
            MaNhanVien = maNhanVien;
            Hoten = hoten;
        }

        public string MaNhanVien1 { get => MaNhanVien; set => MaNhanVien = value; }
        public string Hoten1 { get => Hoten; set => Hoten = value; }
    }
}
