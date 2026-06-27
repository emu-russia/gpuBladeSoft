unsigned int __thiscall sub_6F8C3AD0(int this, __int16 *a2, unsigned int a3, char a4, int a5)
{
  __int16 *v5; // ebx@1
  int v6; // esi@1
  int v7; // edi@3
  __int16 *v8; // ebp@3
  int v9; // ecx@5
  signed int v10; // eax@6
  signed int v12; // eax@11

  v5 = a2;
  v6 = a5;
  if ( *(_BYTE *)(this + 12) )
  {
    if ( (unsigned int)a2 < a3 )
    {
      v7 = this;
      v8 = &a2[((a3 - 1 - (unsigned int)a2) >> 1) + 1];
      do
      {
        while ( 1 )
        {
          v9 = (unsigned __int16)*v5;
          if ( (unsigned __int16)v9 > 0x7Fu )
            break;
          ++v5;
          *(_BYTE *)(++v6 - 1) = *(_BYTE *)(v7 + v9 + 13);
          if ( v8 == v5 )
            return a3;
        }
        v10 = sub_6F8A37C0(*v5);
        if ( v10 == -1 )
          LOBYTE(v10) = a4;
        ++v5;
        *(_BYTE *)(++v6 - 1) = v10;
      }
      while ( v8 != v5 );
    }
    return a3;
  }
  if ( (unsigned int)a2 >= a3 )
    return a3;
  do
  {
    v12 = sub_6F8A37C0(*v5);
    if ( v12 == -1 )
      LOBYTE(v12) = a4;
    ++v6;
    ++v5;
    *(_BYTE *)(v6 - 1) = v12;
  }
  while ( v6 != a5 + ((a3 - 1 - (unsigned int)a2) >> 1) + 1 );
  return a3;
}
