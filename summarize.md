# Ray Tracing In One Weekend
## เกี่ยวกับการเขียน c++ ใน project นี้
<p>ของที่อยู่ภายใน class จะถูกเรียกใช้เมื่อมีค่าของ class นั้นๆเช่น Class ของ Vec3 
จะสามารถเรียกใช้พวกฟังชั้นภายใน class ได้ เช่น ค่า x y z แต่ว่าของที่ไม่ได้อยู่ใน 
จะสามารถเรียกใช้ตอนไหนก็ได้ เช่นพวก dot cross เป็นต้น</p>

<p>std::ostream นี้เป็นตัว type ของ class (เดี่ยวหาเพื่อม)ที่เราสามารถใส่ค่าพวก std::cout ลงไปได้ด้วย 
และ std::ostream& operator<< แบบนี้คือถ้า cout << จะเล่นฟังชั้นนี้</p>

## PPM Example
<p> การสร้างภาพจากตัวเลขจาก RGB และมีขนาด 3 แถว 2 ชั้น </p>
<img src="image/fig-1.01-ppm.jpg">

## Ray Class
