Trong ngôn ngữ c++, thuật ngữ stream là để trừu tượng hoá: một cấu trúc cho phép program gửi (output) hoặc nhận (input) một số lượng [byte](#byte) không xác định (data stream) ngay khi cần giữa nó (program) và [i/o devices](#iodevices) hoặc i/o files hoặc một i/o network theo thời gian. Vì vậy stream không có tính truy cập như mảng hoặc chuỗi hoặc vector. Ẩn dụ điều này như một dòng nước (có thể tích tuỳ tiện) (a stream of water) chảy từ nguồn đến đích trong tự nhiên.

Khi một program nhận một data stream cần nhận từ nguồn, cấu trúc cơ sở (base) của data stream được cụ thể hoá là input: input stream.

Khi một program gửi một data stream cần gửi đến đích, cấu trúc cơ sở (base) của data stream được cụ thể hoá là output: output stream.

# Organization

\>>: input stream operator

<<: output stream operator

`class`: class

\<header>: header



## organization `ios`

 `ios_base`

## organization `istream`+ `ostream`

`ios`

## organization `iostream`

`istream`: input devices or input file or input network >> **input stream** >> program

`ostream`: output devices or output file or output network << **output stream** << program

## organization `fstream`

manipulate **files** using streams (`iostream`)


## organization `ifstream`

`istream`: **input file** >> **input stream** >> program


## organization `ofstream`

`ostream`: **output file** << **output stream** << program

## organization \<sstream>

The classes defined in this file are used to manipulate string objects as if they were streams.

## byte <a id="byte"></a>

Đơn vị đo lường dữ liệu máy tính.

## i/o devices <a id="iodevices"></a>:

keyboard (input device), printer (output device)