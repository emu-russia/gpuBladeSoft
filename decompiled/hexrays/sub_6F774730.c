int __usercall sub_6F774730@<eax>(_BYTE *a1@<eax>)
{
  _BYTE *v1; // esi@2
  int v2; // edx@2
  int result; // eax@2
  char *v4; // edi@3
  signed int v5; // ebp@3
  int v6; // ecx@4
  int v7; // ecx@5
  int v8; // eax@6
  int v9; // ebx@6

  if ( a1 )
  {
    v1 = a1;
    v2 = *a1;
    result = 0;
    if ( (_BYTE)v2 )
    {
      v4 = (char *)&unk_6FB55B80;
      v5 = 10;
      if ( (_BYTE)v2 == 48 && (v1[1] & 0xDF) == 88 )
      {
        v2 = v1[2];
        v4 = byte_6FB55B60;
        v1 += 2;
        v5 = 16;
      }
      v6 = (unsigned __int8)v4[(unsigned __int8)v2 >> 3];
      if ( _bittest(&v6, v2 & 7) )
      {
        v7 = 0;
        do
        {
          ++v1;
          v8 = (unsigned __int8)byte_6FB55BA0[v2];
          v2 = *v1;
          v7 = v8 + v5 * v7;
          v9 = (unsigned __int8)v4[(unsigned __int8)v2 >> 3];
        }
        while ( _bittest(&v9, *v1 & 7) );
        result = v7;
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
