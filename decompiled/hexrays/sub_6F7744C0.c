int __usercall sub_6F7744C0@<eax>(unsigned __int8 *a1@<eax>)
{
  unsigned __int8 *v1; // ebx@2
  int v2; // edx@2
  int result; // eax@2
  signed int v4; // ebp@4
  char *v5; // edi@4
  int v6; // ecx@5
  unsigned __int8 v7; // cf@5
  int v8; // ecx@5
  int v9; // eax@6
  int v10; // esi@6
  signed __int16 v11; // [sp+0h] [bp-12h]@3

  if ( !a1 )
    return 0;
  v1 = a1;
  v2 = (char)*a1;
  result = 0;
  if ( (_BYTE)v2 )
  {
    v11 = 0;
    if ( (_BYTE)v2 == 45 )
    {
      v2 = (char)(v1++)[1];
      v11 = 1;
      v4 = 10;
      v5 = (char *)&unk_6FB55B80;
      if ( (_BYTE)v2 != 48 )
        goto LABEL_5;
    }
    else
    {
      v4 = 10;
      v5 = (char *)&unk_6FB55B80;
      if ( (_BYTE)v2 != 48 )
      {
LABEL_5:
        v6 = (unsigned __int8)v5[(unsigned __int8)v2 >> 3];
        v7 = _bittest(&v6, v2 & 7);
        v8 = 0;
        if ( v7 )
        {
          do
          {
            ++v1;
            v9 = (unsigned __int8)byte_6FB55BA0[v2];
            v2 = (char)*v1;
            v8 = v9 + v4 * v8;
            v10 = (unsigned __int8)v5[*v1 >> 3];
          }
          while ( _bittest(&v10, *v1 & 7) );
        }
        result = -v8;
        if ( !v11 )
          result = v8;
        return result;
      }
    }
    if ( (v1[1] & 0xDF) == 88 )
    {
      v2 = (char)v1[2];
      v4 = 16;
      v1 += 2;
      v5 = byte_6FB55B60;
    }
    goto LABEL_5;
  }
  return result;
}
