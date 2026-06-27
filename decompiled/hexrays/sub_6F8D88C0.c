signed int __stdcall sub_6F8D88C0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5, int a6, int *a7)
{
  int v7; // ecx@1
  unsigned int *v8; // ebx@1
  unsigned int v9; // edx@2
  signed int result; // eax@3
  int v11; // [sp+8h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-Ch]@1

  v7 = a5;
  v8 = a2;
  v11 = a5;
  v12 = a6;
  if ( a2 == a3 )
  {
    result = 0;
  }
  else
  {
    v9 = *a2;
    if ( *a2 <= 0x10FFFFu )
    {
      do
      {
        if ( !(unsigned __int8)sub_6F90DD30((int)&v11, v9) )
        {
          v7 = v11;
          result = 1;
          goto LABEL_8;
        }
        ++v8;
        if ( a3 == v8 )
        {
          v7 = v11;
          result = 0;
          goto LABEL_8;
        }
        v9 = *v8;
      }
      while ( *v8 <= 0x10FFFF );
      v7 = v11;
      result = 2;
    }
    else
    {
      result = 2;
    }
  }
LABEL_8:
  *a4 = v8;
  *a7 = v7;
  return result;
}
