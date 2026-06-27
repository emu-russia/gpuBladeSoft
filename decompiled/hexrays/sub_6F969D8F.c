int __usercall sub_6F969D8F@<eax>(char a1@<al>, int a2@<edx>, int a3@<ecx>, int a4, char a5, char a6)
{
  int v6; // ebx@1
  signed int v7; // edi@3
  int v8; // edx@18
  signed int v9; // edx@19
  int v10; // edx@24
  unsigned int v11; // eax@25
  int v12; // eax@27
  int v13; // esi@31
  int v14; // eax@31
  unsigned int v15; // eax@40
  char v17; // [sp+0h] [bp-14h]@31

  v6 = a4;
  if ( !(a1 & 4) || *(_BYTE *)(a2 + 1572 * a3 + 256) )
    return v6;
  v7 = 0;
  if ( a4 < 0 )
  {
    v6 = -a4;
    v7 = 1;
  }
  if ( a3 != 1 )
  {
    if ( a1 & 1 )
      goto LABEL_31;
LABEL_9:
    if ( !(a6 & 2) || a3 != 1 || v6 > 191 )
    {
      if ( a5 & 1 )
      {
        if ( v6 <= 79 )
          v6 = 64;
      }
      else if ( v6 <= 55 )
      {
        v6 = 56;
      }
      v8 = 1572 * a3 + a2;
      if ( *(_DWORD *)(v8 + 52) )
      {
        v9 = *(_DWORD *)(v8 + 60);
        if ( (((v6 - v9) >> 31) ^ (v6 - v9)) - ((v6 - v9) >> 31) > 39 )
        {
          if ( v6 > 191 )
          {
            v6 = (v6 + 32) & 0xFFFFFFC0;
          }
          else
          {
            v10 = v6 & 0x3F;
            if ( v10 > 9 )
            {
              v11 = v6 & 0xFFFFFFC0;
              if ( v10 > 31 )
              {
                v12 = v11 + 54;
                if ( v10 <= 53 )
                  v6 = v12;
              }
              else
              {
                v6 = v11 + 10;
              }
            }
          }
        }
        else
        {
          v6 = 48;
          if ( v9 > 47 )
            v6 = v9;
        }
      }
    }
    goto LABEL_45;
  }
  if ( !(a1 & 2) )
    goto LABEL_9;
LABEL_31:
  v17 = a1;
  v13 = a3;
  v14 = sub_6F969640(a2 + 1572 * a3 + 56, *(_DWORD *)(a2 + 1572 * a3 + 52), v6);
  if ( v13 == 1 )
  {
    v6 = 64;
    if ( v14 > 63 )
      v6 = (v14 + 16) & 0xFFFFFFC0;
    goto LABEL_45;
  }
  if ( v17 & 8 )
  {
    v6 = 64;
    if ( v14 <= 63 )
      goto LABEL_45;
  }
  else
  {
    if ( v14 <= 47 )
    {
      v6 = (v14 + 64) >> 1;
      goto LABEL_45;
    }
    if ( v14 <= 127 )
    {
      v15 = (v14 + 22) & 0xFFFFFFC0;
      if ( (signed int)((((signed int)(v15 - v6) >> 31) ^ (v15 - v6)) - ((signed int)(v15 - v6) >> 31)) <= 15 )
      {
        v6 = v15;
      }
      else if ( v6 <= 47 )
      {
        v6 = (v6 + 64) >> 1;
      }
      goto LABEL_45;
    }
  }
  v6 = (v14 + 32) & 0xFFFFFFC0;
LABEL_45:
  if ( v7 )
    v6 = -v6;
  return v6;
}
