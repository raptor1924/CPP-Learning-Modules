// Declare template structure, return the type passed in
//
template <typename T>
T get_smallest(T num1, T num2)
{
  return num2<num1? num2 : num1;
}
