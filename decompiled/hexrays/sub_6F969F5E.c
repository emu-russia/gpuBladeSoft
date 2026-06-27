int __usercall sub_6F969F5E@<eax>(char a1@<al>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebx@1
  int v5; // ecx@1
  signed int v6; // edi@2
  int v7; // edx@8
  signed int v8; // edx@9
  int v9; // eax@16
  unsigned int v10; // edx@17
  int v11; // edx@19
  char v12; // si@22
  int v13; // eax@22

  v4 = a3;
  v5 = a4;
  if ( !(a1 & 4) )
    return v5;
  v6 = 0;
  if ( a4 < 0 )
  {
    v5 = -a4;
    v6 = 1;
  }
  if ( v4 != 1 )
  {
    if ( a1 & 1 )
      goto LABEL_22;
LABEL_8:
    v7 = 1572 * v4 + a2;
    if ( *(_DWORD *)(v7 + 52) && (v8 = *(_DWORD *)(v7 + 60), (unsigned int)(v5 - v8 + 39) <= 0x4E) )
    {
      v5 = 48;
      if ( v8 > 47 )
        v5 = v8;
    }
    else if ( v5 > 53 )
    {
      if ( v5 <= 191 )
      {
        v9 = v5 & 0x3F;
        if ( v9 > 9 )
        {
          v10 = v5 & 0xFFFFFFC0;
          if ( v9 > 21 )
          {
            v11 = v10 + 54;
            if ( (unsigned int)(v9 - 42) <= 0xB )
              v5 = v11;
          }
          else
          {
            v5 = v10 + 10;
          }
        }
      }
    }
    else
    {
      v5 += (54 - v5) >> 1;
    }
    goto LABEL_33;
  }
  if ( !(a1 & 2) )
    goto LABEL_8;
LABEL_22:
  v12 = a1;
  v13 = sub_6F969640(a2 + 1572 * v4 + 56, *(_DWORD *)(a2 + 1572 * v4 + 52), v5);
  if ( v4 == 1 )
  {
    v5 = 64;
    if ( v13 > 63 )
      v5 = (v13 + 16) & 0xFFFFFFC0;
    goto LABEL_33;
  }
  if ( v12 & 8 )
  {
    v5 = 64;
    if ( v13 <= 63 )
      goto LABEL_33;
  }
  else
  {
    if ( v13 <= 47 )
    {
      v5 = (v13 + 64) >> 1;
      goto LABEL_33;
    }
    if ( v13 <= 127 )
    {
      v5 = (v13 + 22) & 0xFFFFFFC0;
      goto LABEL_33;
    }
  }
  v5 = (v13 + 32) & 0xFFFFFFC0;
LABEL_33:
  if ( v6 )
    v5 = -v5;
  return v5;
}
