signed int sub_6F6849C0()
{
  int v0; // ebx@1
  int v1; // edx@1
  int v2; // ecx@1
  double v3; // st6@1
  int v4; // edx@1
  double v5; // st7@1
  double v6; // st7@3
  int v7; // edi@7
  double v8; // st7@7
  double v9; // st7@11
  int v10; // edx@12
  signed int result; // eax@12
  int v12; // [sp+10h] [bp-1Ch]@1

  v0 = (unsigned __int8)byte_6FBB5057 - (unsigned __int8)byte_6FBB5055;
  v12 = (unsigned __int8)byte_6FBB5055 - (unsigned __int8)byte_6FBB5054;
  v1 = (unsigned __int8)byte_6FBB5053 - (unsigned __int8)byte_6FBB5051;
  v2 = v1;
  v3 = (double)(v12 * v1);
  v4 = 1;
  v5 = (double)(v0 * ((unsigned __int8)byte_6FBB5051 - (unsigned __int8)byte_6FBB5050)) - v3;
  if ( v5 >= 0.0 )
    v4 = 2 * (v5 > 0.0);
  v6 = (double)(((unsigned __int8)byte_6FBB5056 - (unsigned __int8)byte_6FBB5057) * v2)
     - (double)(((unsigned __int8)byte_6FBB5052 - (unsigned __int8)byte_6FBB5053) * v0);
  if ( v6 < 0.0 )
  {
    v4 |= 1u;
  }
  else
  {
    if ( v6 <= 0.0 )
      goto LABEL_7;
    v4 |= 2u;
  }
  if ( v4 == 3 )
    return 0;
LABEL_7:
  v7 = (unsigned __int8)byte_6FBB5054 - (unsigned __int8)byte_6FBB5056;
  v8 = (double)(v7 * ((unsigned __int8)byte_6FBB5052 - (unsigned __int8)byte_6FBB5053))
     - (double)(((unsigned __int8)byte_6FBB5050 - (unsigned __int8)byte_6FBB5052)
              * ((unsigned __int8)byte_6FBB5056 - (unsigned __int8)byte_6FBB5057));
  if ( v8 < 0.0 )
  {
    v4 |= 1u;
  }
  else
  {
    if ( v8 <= 0.0 )
      goto LABEL_11;
    v4 |= 2u;
  }
  if ( v4 == 3 )
    return 0;
LABEL_11:
  v9 = (double)(((unsigned __int8)byte_6FBB5050 - (unsigned __int8)byte_6FBB5052) * v12)
     - (double)(((unsigned __int8)byte_6FBB5051 - (unsigned __int8)byte_6FBB5050) * v7);
  if ( v9 < 0.0 )
  {
    v10 = v4 | 1;
  }
  else
  {
    v10 = v4 | 2;
    result = 1;
    if ( v9 <= 0.0 )
      return result;
  }
  return v10 != 3;
}
