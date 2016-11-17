class cube
{
   private:
   double length;
   public:
   cube( double length_value )
   {
	   length = length_value ;
   }
   double base_area()
   {
	   double area = length * length ;
	   return area;
   }
   double total_surface_area()
   {
	   double area = base_area() * 6 ;
	   return area;
   }
   double volume()
   {
	   double vol = pow (length, 3);
	   return vol;
   }
   double length_of_face_diagonal()
   {
	   double result, num = 2;
	   result = sqrt(num);
	   double face_diag = length * result;
	   return face_diag;
   }
   double length_of_body_diagonal()
   {
	   double result, num = 3;
	   result = sqrt(num);
	   double body_diag = length * result;
	   return body_diag;
   }
   double angle_between_body_diagonal_and_base()
   {
	   double num = length_of_body_diagonal();
	   double angle = (asin(length/num)) * (180/PI);
	   return angle;
   }

};
