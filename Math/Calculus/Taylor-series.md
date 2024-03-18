- [xấp xỉ tuyến tính (linear approximations)](#xấp-xỉ-tuyến-tính-linear-approximations)
- [chuỗi Taylor (Taylor series)](#chuỗi-taylor-taylor-series)
- [khai triển Maclaurin](#khai-triển-maclaurin)

## xấp xỉ tuyến tính (linear approximations)

Với các kiểu hàm số như: hàm logarit, hàm lượng giác, hàm căn thức..., trừ một số điểm mà ta có được điều kiện dễ dàng để xác định giá trị của chúng (các điểm đặc biệt) thì thật khó để ta có thể thực hiện công việc đánh giá chúng một cách chính xác hơn được nếu giả sử rằng hiện nay không có những chiếc máy tính tồn tại.

*Vậy thì cách nào để chúng ta có thể đánh giá các kiểu hàm số như vậy một cách chính xác và dễ dàng hơn?*

Đầu tiên, với $a$ là một điểm đặc biệt của hàm số $f(x)$:

Giá trị đạo hàm tại $a$ của $f(x)$ không chỉ là hệ số góc $m$ (gradient) của phương trình đường tiếp tuyến $G(x)$ tại tiếp điểm $a$ của hàm số $f(x)$, ở một góc nhìn khác, nó còn là "*tốc độ biến thiên*" của hàm $f(x)$ tại $a$:

$$f'(a) = m$$

Theo đó, sự đồng nhất về tốc độ biến thiên $m$ của hàm đa thức bậc nhất $G(x)$ và hàm $f(x)$ tại nơi mà đồ thị $G(x)$  đi qua điểm đặc biệt $a$ của $f(x)$ sẽ cho mỗi ***giá trị xác định*** của $G(x)$ khi $x \to a$ là ***giá trị xấp xỉ*** giá trị của $f(x)$ khi $x \to a$ có sai số $R(x)$ tốt hơn bất kì sai số của đường thẳng nào khác đi qua $a$.

Từ đây, ta có được một phương trình để tính xấp xỉ một hàm $f(x)$ quanh khu vực cận $a$ được gọi là ***phương trình xấp xỉ tuyến tính*** theo tiếp tuyến của nó tại $a$:

$$ f(x)=G(x)+R(x)=f(a)+f'(a)(x-a)+R(x) .$$

Tuy vậy, phạm vi tính gần đúng của phép tính xấp xỉ tuyến tính vẫn rất hạn chế, vì càng rời xa $a$, $R(x)$ càng rời xa 0.

## chuỗi Taylor (Taylor series)

Với phép tính xấp xỉ tuyến tính đã có trước đó, một phép tính đạo hàm bậc 2 trên $G(x)$ và $f(x)$ cho thấy tốc độ biến thiên giữa $G'(x)$ và $f'(x)$ không còn đồng nhất, hay nói một cách chính xác hơn là không thể chủ động đồng nhất vì $G'(x)$ khi đó là một hàm hằng $\Leftrightarrow$ một dự đoán rằng: "*đồ thị đạo hàm bậc nhất tại điểm* $a$ *không có cùng độ dốc*" $\Leftrightarrow$ có thể nói một cách khách quan rằng trong trường hợp giả định có thể chủ động đồng nhất được $m'$ trong phép tính đạo hàm bậc 2 nhưng không thực hiện, thì $R'(x)$ được cho là "*vẫn không hề đủ gần 0*" và vì vậy $R(x)$ được cho là "*vẫn không đủ gần 0*" nên phép tính xấp xỉ "*vẫn chưa đủ tốt*".

Mặt khác, các hàm đa thức có cấu trúc đại số trực diện giúp rất dễ dàng trong việc tính toán đánh giá và vẽ đồ thị ở mọi điểm.

Vì vậy để có thể có được một cải tiến trên phép tính xấp xỉ tuyến tính đã có, ta cần đồng ý rằng: 

$G'(x)$ khi đó "*ít nhất*" phải là một hàm đa thức bậc nhất để có thể chủ động đồng nhất giá trị $m'$ $\Leftrightarrow$ sự yêu cầu khai triển một đa thức $G(x)$ bậc càng cao càng tốt sao cho $f(a)=G(a) \Leftrightarrow$ sai số $R^{n}(x)$  giữa hai đạo hàm cùng bậc của $G(x)$ và $f(x)$ càng được tiến về 0 thì $R(x)$ trong phép tính gần đúng cũng càng tiến về 0, cùng với đó phạm vi để tính gần đúng càng được mở rộng đáng kể.

Theo ý nghĩa đó, ta sẽ có được một *tổng vô hạn* tại $a$ để đánh giá chính xác hàm số $f(x)$ theo cách *khai triển* một đa thức bậc $n \to \infty$:

$$ f(x)=f(a) + \frac{f'(a)}{1!}(x-a) + \frac{f''(a)}{2!}(x-a)^2 + ... + \frac{f^n(a)}{n!}(x-a)^n + R(x)$$ 

$$=\sum_{n=0}^{\infty} \frac{f^n(a)}{n!}(x-a)^n.$$

*Khai triển* này được gọi là ***chuỗi Taylor*** hay ***khai triển Taylor***, theo tên của nhà toán học *Brook Taylor*, người đã  giới thiệu chúng vào năm 1715.

## khai triển Maclaurin

Một khai triển Taylor của hàm số $f(x)$ tại điểm $x=0$ tồn tại thì được gọi là ***khai triển Maclaurin*** hay ***chuỗi Maclaurin***, đây là một trường hợp đặc biệt của khai triển Taylor.

Ví dụ:

Ta sẽ có một phương trình xấp xỉ Maclaurin của hàm $sin(x)$: 

$$sin(x)=\sum_{n=0}^{\infty} \frac{(-1)^n}{(2n+1)!}x^{2n+1}.$$

<p align="center">
<img width="488" src="taylor-series.svg"/>
</p> 

<i><sup> Hình vẽ trên mô tả hàm số sin(x) và các đa thức Taylor bậc 1, 3, 5, 7, 9, 11, 13 gọi là các xấp xỉ Taylor của hàm tại điểm x=0 hay còn gọi là các xấp xỉ Maclaurin của hàm.</sup></i>
