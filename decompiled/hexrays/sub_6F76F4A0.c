signed int __cdecl sub_6F76F4A0(int a1, _DWORD *a2)
{
  signed int result; // eax@3
  _DWORD *v3; // edx@5
  int v4; // [sp+1Ch] [bp-10h]@5

  if ( a1 && a2 )
  {
    v3 = sub_6F773A50(a1, 192, &v4);
    result = v4;
    if ( !v4 )
    {
      *v3 = a1;
      v3[42] = 0;
      v3[41] = 0;
      v3[1] = 2;
      v3[2] = 6;
      v3[3] = 0;
      v3[47] = 1;
      *a2 = v3;
    }
  }
  else
  {
    result = 6;
  }
  return result;
}
