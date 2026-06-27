int __usercall sub_6F9693CD@<eax>(int a1@<eax>, signed int a2@<edx>)
{
  int v2; // edi@1
  unsigned int v3; // esi@1
  char *v4; // eax@1
  char *v5; // ebx@2
  int v6; // eax@2
  int v7; // edi@2
  unsigned int v8; // ebx@2
  int v9; // ebp@2
  char v10; // al@4
  unsigned int v11; // edx@4
  unsigned int v12; // eax@5
  int v13; // ST2C_4@11
  __int16 v14; // ax@11
  int v15; // ST2C_4@13
  char v16; // al@13
  int result; // eax@16
  unsigned int v18; // [sp+24h] [bp-38h]@4
  int v19; // [sp+28h] [bp-34h]@1
  int v20; // [sp+3Ch] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v19 = *(_DWORD *)(a1 + 28);
  v20 = 0;
  v4 = sub_6F773B30(v19, 2, 0, a2, 0, &v20);
  if ( v20 )
  {
    result = 0;
  }
  else
  {
    v5 = v4;
    v6 = v2;
    v7 = (int)v5;
    v8 = 0;
    v9 = v6;
    while ( v8 < v3 )
    {
      v10 = sub_6F7724A0(v9);
      v11 = v8;
      v18 = v10 & 0x3F;
      if ( v10 >= 0 )
      {
        if ( v10 & 0x40 )
        {
          while ( 1 )
          {
            v12 = v11 - v8;
            if ( v11 - v8 > v18 || v11 >= v3 )
              break;
            v13 = v11 + 1;
            v14 = sub_6F7724C0(v9);
            v11 = v13;
            *(_WORD *)(v7 + 2 * v13 - 2) = v14;
          }
        }
        else
        {
          while ( 1 )
          {
            v12 = v11 - v8;
            if ( v11 - v8 > v18 || v11 >= v3 )
              break;
            v15 = v11 + 1;
            v16 = sub_6F7724A0(v9);
            v11 = v15;
            *(_WORD *)(v7 + 2 * v15 - 2) = v16;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = v11 - v8;
          if ( v11 - v8 > v18 || v11 >= v3 )
            break;
          *(_WORD *)(v7 + 2 * ++v11 - 2) = 0;
        }
      }
      if ( v12 <= v18 )
      {
        sub_6F773D90(v19, v7);
        return 0;
      }
      v8 = v11;
    }
    result = v7;
  }
  return result;
}
