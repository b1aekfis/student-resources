# memory allocation

Trong ngôn ngữ C, tất cả nhu cầu về bộ nhớ đều phải được xác định trước khi thực hiện chương trình bằng cách khởi tạo các biến, các mảng,... cần thiết, phân bổ bộ nhớ theo cách này được gọi là cấp phát bộ nhớ tĩnh. Nhưng có những trường hợp nhu cầu bộ nhớ của chương trình chỉ có thể được xác định trong thời gian chạy (runtime), ví dụ: thời điểm cần bộ nhớ tùy thuộc vào thông tin đầu vào của người dùng trong runtime,... Khi đó cấp phát theo cách thông thường sẽ không được chấp nhận vì rủi ro mà *"các tác vụ trên khối data chỉ mang tính thời vụ của chương trình nhưng với nhu cầu bộ nhớ cao"* đem đến, trong khi tài nguyên máy tính là có hạn. Vì vậy, để phân bổ thêm bộ nhớ trong runtime một cách an toàn, hành động cấp phát bộ nhớ bởi các hàm *malloc(), calloc()* được quản lý bởi một đơn vị là một biến con trỏ được chỉ định (mặc dù tính trình bày của con trỏ có phần rắc rối hơn cách khai báo thông thường), phân bổ bộ nhớ theo cách này được gọi là cấp phát bộ nhớ động.

Giải thích về rủi ro khi cấp phát tĩnh trong runtime:

Khi khai báo một biến bất kỳ như `int x;`, hoặc `int n; int arr[n];`,... các biến khi đó mặc định được cấp phát bộ nhớ từ một phân vùng được gọi là Stack (các biến mặc định "tự động trỏ" vào Stack - call stack pointer). Stack là phân vùng được CPU quản lý, 
vì vậy mặc dù được trỏ tự động đến vùng bộ nhớ được cpu cho phép sử dụng, tuy nhiên Stack không cho phép can thiệp (control) vào "thời gian sống" của phân vùng được cấp trong runtime, phân vùng bộ nhớ được cấp phát bởi Stack chỉ được giải phóng sau khi chương trình bị kết thúc, điều này gây ra rủi ro *Stack overflow* trong runtime khi không thể tái sử dụng bộ nhớ một cách linh hoạt giữa các tác vụ trong runtime.

Mặc khác, hành động yêu cầu cấp phát bộ nhớ bởi các hàm *malloc(), calloc()* là hành động phân bổ bộ nhớ từ một phân vùng được gọi là Heap. Heap là phân vùng được cpu chỉ định tự người dùng quản lý thông qua biến con trỏ. Điều này cho phép người dùng chủ động giải phóng bộ nhớ trong runtime khi cần thiết.

Hành động cấp phát bộ nhớ tĩnh trong runtime sau đó đã được hợp thức hoá (được chấp nhận) kể từ tiêu chuẩn C99, tuy nhiên rủi ro như đã nêu trên sẽ không được gcc cảnh cáo.

Do đó, kể từ C99, hành động cấp phát tĩnh trong runtime sẽ bị coi là kém linh hoạt và kém an toàn hơn so với cấp phát động.

## rò rỉ bộ nhớ (memory leak)

*Rò rỉ bộ nhớ* là vấn đề xảy ra khi một chương trình máy tính (program) quản lý không chính xác việc cấp phát bộ nhớ theo cách bộ nhớ không cần dùng nữa lại không được giải phóng.

Khi cấp phát động, nếu không thực hiện giải phóng phân vùng bộ nhớ đã được cấp sau khi sử dụng, thì ngay cả khi đã kết thúc chương trình, khác với cấp phát tĩnh, phân vùng đó cũng không được tự động giải phóng.

*Rỏ rỉ bộ nhớ* làm giảm hiệu suất của máy tính khi giảm số lượng bộ nhớ có sẵn. Cuối cùng, trong trường hợp xấu nhất, quá nhiều bộ nhớ có sẵn bị cấp phát và khiến tất cả hay một phần của hệ thống hay thiết bị hoạt động kém chính xác hoặc trì trề,...

## in C++, operators new and new[]

toán tử *new*: toán tử này trả về một phân vùng bộ nhớ thuộc Heap theo nhu cầu cho đơn vị biến con trỏ (tương tự *malloc()*, *calloc()* trong C):

pointer = new type

pointer = new type[number_of_elements]

ví dụ:

```c++
int * pointer = new int; // new cap phat mot phan vung bo nho co kich thuoc sizeof(int)=4 (byte) cho pointer.
```

```c++
int n;
int * pointer;
pointer = new int[n]; // new cap phat n phan vung bo nho lien ke, voi moi phan vung co kich thuoc sizeof(int)=4 (byte) duoc danh chi muc tu 0->(n-1) theo thu tu addr cua chinh cac phan vung.
...
```

## in C++, operators delete and delete[]

toán tử *delete*: toán tử chỉ định giải phóng một phân vùng bộ nhớ thuộc Heap (tương tự *free()* trong C).