int sub_6F684B60()
{
  int v0; // ebx@1
  int v1; // esi@1
  int v2; // ecx@1
  long double v3; // st7@1
  long double v4; // st6@1
  long double v5; // st7@1
  int result; // eax@2
  int v7; // eax@3

  v0 = (unsigned __int8)byte_6FBB5051;
  v1 = (unsigned __int8)byte_6FBB5051 - (unsigned __int8)byte_6FBB5052;
  v2 = (unsigned __int8)byte_6FBB5055 - (unsigned __int8)byte_6FBB5056;
  v3 = sqrt((double)(v2 * v2 + v1 * v1));
  v4 = (double)(v1 * ((unsigned __int8)byte_6FBB5054 - (unsigned __int8)byte_6FBB5055)
              - v2 * ((unsigned __int8)byte_6FBB5050 - (unsigned __int8)byte_6FBB5051))
     / v3;
  v5 = (double)(v1 * ((unsigned __int8)byte_6FBB5057 - (unsigned __int8)byte_6FBB5055)
              - ((unsigned __int8)byte_6FBB5053 - (unsigned __int8)byte_6FBB5051) * v2)
     / v3;
  if ( v4 >= 0.00000011920929 || (result = 1, v5 >= 0.00000011920929) )
  {
    LOBYTE(v0) = v4 > -0.00000011920929;
    v7 = v5 <= -0.00000011920929;
    LOBYTE(v7) = v5 > -0.00000011920929;
    result = v0 & v7;
  }
  return result;
}
