- [Ước số chung lớn nhất (*gcd*)](#ước-số-chung-lớn-nhất-gcd)
- [Thuật toán Euclid](#thuật-toán-euclid)
  - [tính toán *gcd* với các số nguyên dương](#tính-toán-gcd-với-các-số-nguyên-dương)
  - [tính toán *gcd* với các số nguyên](#tính-toán-gcd-với-các-số-nguyên)
  - [tính toán *gcd* của nhiều hơn hai số nguyên đầu vào](#tính-toán-gcd-của-nhiều-hơn-hai-số-nguyên-đầu-vào)

# Ước số chung lớn nhất (*gcd*)

<sup >*greatest common divisor* </sup>

Mối quan hệ chia hết trên tập số nguyên nói rằng: nếu $b \mid a$ thì: $-b \mid a$, với $-b$ gọi là số đối của $b.$ Vì vậy:

*Ước số chung lớn nhất* ($gcd$) của hai hay nhiều số nguyên (có ít nhất một số trong số đó $\ne 0$) được định nghĩa là *số nguyên dương lớn nhất* là ước số chung của các số đó.

Kí hiệu ước số chung lớn nhất của các số nguyên $a_1, a_2, ... a_n: gcd(a_1,a_2,...,a_n).$

Trong trường hợp tất cả số nguyên đều bằng $0$ thì chúng không có $gcd$ vì khi đó mọi số tự nhiên khác không đều là ước chung của các số đó.

Trong trường hợp tất cả số nguyên đều bằng nhau thì $gcd$ của chúng là bất kì phần tử nào trong dãy.

# Thuật toán Euclid

## tính toán *gcd* với các số nguyên dương

[Định lý cơ bản của số học](https://w.wiki/8iXJ) (fundamental theorem of arithmetic) hay định lý phân tích thừa số nguyên tố (prime factorization theorem) phát biểu rằng mọi số nguyên lớn hơn 1 đều có thể dược biểu diễn bằng một tích của các số nguyên tố duy nhất, vì vậy, $gcd$ có thể được tính bằng cách xác định các thừa số nguyên tố. Trong thực tế, phương pháp này chỉ khả thi đối với các số nhỏ, vì việc khai triển tích các thừa số nguyên tố mất quá nhiều thời gian. Vì vậy, để tính toán tốt hơn...

Đầu tiên, phương pháp của Euclid để tính ước chung lớn nhất của hai số nguyên dương được giới thiệu trên nguyên tắc ước số chung lớn nhất của cặp số không thay đổi khi số lớn hơn được thay bằng hiệu của nó với số nhỏ hơn, thay cho đến khi đạt được cặp số bằng nhau.

Bằng chứng cho điều này trong một bối cảnh cụ thể:

cho hai số nguyên dương $a$ và $b$ $(a \gt b)$, giả sử,  nếu $G$ được xác định là $gcd$ của $a$ và $b$:

$$G=gcd(a,b)$$

thì hiển nhiên tồn tại các số nguyên dương $e$ và $f$ là *các số nguyên tố cùng nhau (coprime integers)* thoả mãn các biểu thức $a=eG$ và $b=fG$ ($e$ và $f$ phải được xác định là các nguyên tố cùng nhau để không thể tồn tại một số $i$  là thừa số chung của chúng thoả mãn $iG \gt G$).

Theo đó, một mặt ta có được biểu thức $a-b=(e-f)G$, mặc khác hệ số $e-f$ trong biểu thức vừa có cũng không thể phân tích thành bất kì thừa số chung nào với $f$, vì vậy

$$\boxed{gcd(a-b,b)=G=gcd(a,b), \lbrace a,b \rbrace \in \mathbb{Z}^{+}, a \gt b.}$$

***Hạn chế của thuật toán***: khi hai số có khoảng cách xa trên trục số, phải thực hiện rất nhiều số phép trừ cho đến khi đạt được cặp số bằng nhau. Chẳng hạn trường hợp với $1000$ và $7$ là cặp số đầu vào, độ hiệu quả của thuật toán về mặt thời gian được cho là khá tệ so với biến thể sau đây, biến thể sau đây thường được ưa thích hơn khi nói đến *"Thuật toán Euclid"*.

Giả sử cho hai số $1000$ và $7$, để thực hiện thuật toán trên cần phải thực hiện rất nhiều phép trừ.

cụ thể cần thực hiện 142 bước trừ $7$ trên số lớn hơn trong cặp số cho đến khi độ lớn hơn trong phép so sánh cặp số đảo chiều hoặc cân bằng (điểm dừng thuật toán), cụ thể ở đây là khi giá trị hiệu đạt bằng $6$:

$1000-7-7-7-7...-7 = 6$

Thật ra, điều này đồng nghĩa với việc đạt được số $r_0$ trong một phép chia Euclid trên số lớn hơn của cặp số đầu vào:

$1000\ \mathbf{rem}\ 7=1000-(7.142) = 6$

tiếp tục 1 bước trừ $6$ trên số lớn hơn để giá trị hiệu đạt bằng $1$:

$7-6 = 1$

điều này đồng nghĩa với việc đạt được số $r_1$ trong một phép chia Euclid trên số lớn hơn của cặp số mới thu được khi độ lớn hơn trong phép so sánh cặp số đảo chiều:

$7\ \mathbf{rem}\ 6=7-(6.1) = 1$

tiếp tục 5 bước trừ $1$ trên số lớn hơn để giá trị hiệu đạt bằng $1$ (cân bằng):

$6-1-1-1-1-1=1 \rightarrow 1-1=0$, tìm thấy $gcd$ khi hai số bằng nhau.

điều này đồng nghĩa với việc đạt được số $r_2$ trong một phép chia Euclid trên số lớn hơn của cặp số mới thu được khi độ lớn hơn trong phép so sánh cặp số đảo chiều:

$6\ \mathbf{rem}\ 1=6-(1.6)=0$, tìm thấy $gcd$ khi $r_2=0.$

Như vậy, có thể thấy trong trường hợp này thuật toán Euclid với phép trừ thực hiện hơn 100 bước để đảo chiều độ lớn hơn trong phép so sánh cặp số, trong khi với phép toán $\mathbf{rem}$ chỉ tốn đúng một bước để đảo chiều với cặp số nguyên dương.

Tổng kết cho tất cả điều này:

> *Hoàn toàn có thể rút gọn các thủ tục cân bằng hoá cặp số nguyên dương đầu vào qua phép trừ của thuật toán Euclid bằng đại lượng* $r$ *trong biểu thức của phép chia Euclid.*

Theo đó

$$\boxed{gcd(a\ \mathbf{rem}\ b, b)=gcd(b\ \mathbf{rem}\ a, a)=G=gcd(a,b), \lbrace a, b\rbrace \in \mathbb{Z}^{+}.}$$

## tính toán *gcd* với các số nguyên

cho hai số nguyên dương $a$ và $b$ $(a \gt b)$, giả sử,  nếu $G$ được xác định là $gcd$ của $a$ và $b$:

$$G=gcd(a,b)$$

thì như đã đề cập, hiển nhiên tồn tại các số nguyên dương $e$ và $f$ là *các số nguyên tố cùng nhau* thoả mãn các biểu thức $a=eG$ và $b=fG$. 

Theo đó, nếu tồn tại một số nguyên $c \neq G$ với $c \mid a,b$ thì $c \mid G$.

Mà cùng với đó, nếu $c \mid a,b$ thì $-c \mid a,b$ hay ta có $c \mid -a,-b$ .

Còn với $G \mid a,b$ thì $-G \mid a,b$ hay ta có $G \mid -a,-b$ .

Rõ ràng hơn khi tổng ý cho tất cả các điều trên:

>*Tập ước chung của* $-a$ *và* $-b$ *cũng là tập ước chung của* $a$ *và* $b$

vì vậy,

>*Tập ước chung của* $-a$ *và* $b$ *cũng là tập ước chung của* $a$ *và* $b$

và

>*Tập ước chung của* $a$ *và* $-b$ *cũng là tập ước chung của* $a$ *và* $b$

hiển nhiên:

$$ \boxed{gcd(-a,-b)=gcd(-a,b)=gcd(a,-b)=G=gcd(a,b).} $$

Do đó, thuật toán Euclid, tính $gcd$ của hai số nguyên dương, đủ để tính $gcd$ của hai số nguyên khác 0 tuỳ ý.

## tính toán *gcd* của nhiều hơn hai số nguyên đầu vào

Khi nhìn vào ý nghĩa của $gcd$, một điều dễ nhận ra được:

> *trên tập ước chung của các số nguyên đầu vào, số nguyên dương lớn nhất là ước chung lớn nhất của các số đó.*

Giả sử với bài toán $gcd$ bao gồm các số nguyên đầu vào $a,b$ và $c$, ta có

tập ước của $a$: 

$D_a= \lbrace x \mid a\rbrace=\lbrace-a,...-1,1,...,a\rbrace$,

tập ước của $b$:

$D_b=\lbrace x \mid b\rbrace=\lbrace -b,...,-1,1,...,b \rbrace$,

và tập ước của $c$:

$D_c=\lbrace x \mid c\rbrace=\lbrace -c,...,-1,1,...,c \rbrace$,

nhìn chung: $gcd(a,b,c)=max\lbrace D_a\cap D_b \cap D_c\rbrace.$

Mặt khác, như đã biết

$\forall x, x \neq 0:$ nếu $x \mid a,b$ thì $x \mid gcd(a,b),$ tức:

$D_a \cap D_b=\lbrace x \mid a,b\rbrace=\lbrace x \mid gcd(a,b)\rbrace=D_{gcd(a,b)}=\lbrace -gcd(a,b)...,-1,1,...,gcd(a,b)\rbrace.$

$\Rightarrow gcd(a,b,c)=max\lbrace D_{gcd(a,b)} \cap D_c \rbrace=gcd(gcd(a,b),c).$

Vì vậy trong trường hợp này:

$$\boxed{gcd(a,b,c)=gcd(gcd(a,b),c)=gcd(a,gcd(b,c))=gcd(gcd(a,c),b).}$$

Một góc nhìn tổng quát:

>$gcd$ của nhiều hơn hai số nguyên đầu vào có thể được tính bằng cách lấy $gcd$ của các cặp số nhiều lần.

Do đó, thuật toán Euclid, tính $gcd$ của hai số nguyên, đủ để tính $gcd$ của nhiều số nguyên tùy ý.
