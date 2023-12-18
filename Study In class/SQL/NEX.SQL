
MonHoc(IDMH, TenMH, SoTC)
GiangVien(IDGV, TenGV, NamSinh, DienThoai, IDKV)
GiangDay(IDGV, IDMH)
KhoaVien(IDKV, TenKV, DiaDiem)

Viết câu lệnh truy vấn thực hiện các câu lệnh sau (SV có thể viết bằng SQL hoặc Đại số quan hệ)
1. Liệt kê thông tin của các giảng viên do "Viện CNTT&TT" quản lý.
2. Cho biết tên các môn học mà giảng viên có tên là "Nguyễn Văn A" giảng dạy
3. "Viện CNTT&TT" có bao nhiêu giảng viên?
4. Cho biết tên khoa/viện có giảng viên giảng dạy nhiều môn học nhất.
5. Giảng viên có mã "GV2011" đã đổi số điện thoại mới là "012345678". Sử dụng câu lệnh SQL để cập nhật thông tin này
câu 1.1

SELECT IDGV,TenGV,NamSinh,DienthOAI
FROM   KhoaVien,GiangVien
WHERE GiangVien.IDKV = KhoaVien.IDKV AND KhoaVien.TENKV = N'Viện CNTT&TT'

câu 1.2

SELECT C.TenMH
FROM GiangVien A,GiangDay B,MonHoc C
WHERE A.IDGV = B.IDGV AND B.IDMH = C.IDMH AND A.TenGV = N'Nguyễn Văn A'

CÂU 1.3

SELECT COUNT(GiangVien.IDGV) 
FROM KhoaVien,GiangVien
WHERE  KhoaVien.TDKV = GiangVien.IDKV AND KhoaVien.TenKV = N'Viện CNTT&TT'

CÂU 1.4
SELECT  A.TenKV
FROM KhoaVien A,GiangVien B,GiangDay C
WHERE  A.IDGV = B.IDGV AND B.IDMH = C.IDMH AND (
            SELECT TOP 1 WITH TIES COUNT(GiangVien.IDGV)
            FROM KhoaVien,GiangVien
            WHERE  KhoaVien.TDKV = GiangVien.IDKV 
          )
CAU 1.5 
    UPDATE GiangVien
    SET DienthOAI = '012345678'
    WHERE IDGV = N'GV2011'