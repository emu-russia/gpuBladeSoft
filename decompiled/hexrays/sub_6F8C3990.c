unsigned int __thiscall sub_6F8C3990(char *this, wint_t *a2, unsigned int a3, _WORD *a4)
{
  wint_t *v4; // ebx@1
  char *v5; // edi@2
  char *v6; // ebp@3
  __int16 v7; // si@3
  _WORD *v8; // eax@7
  _WORD *v10; // [sp+18h] [bp-24h]@2
  char *v11; // [sp+1Ch] [bp-20h]@2

  v4 = a2;
  if ( (unsigned int)a2 < a3 )
  {
    v5 = this + 686;
    v10 = &a4[((a3 - 1 - (unsigned int)a2) >> 1) + 1];
    v11 = this + 654;
    do
    {
      v6 = v11;
      v7 = 0;
      do
      {
        if ( iswctype(*v4, *((_WORD *)v6 + 16)) )
          v7 |= *(_WORD *)v6;
        v6 += 2;
      }
      while ( v6 != v5 );
      v8 = a4;
      ++v4;
      ++a4;
      *v8 = v7;
    }
    while ( a4 != v10 );
  }
  return a3;
}
