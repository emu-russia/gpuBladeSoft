char *__usercall sub_6F969250@<eax>(int a1@<eax>, unsigned int *a2@<edx>)
{
  int v2; // edi@1
  unsigned int *v3; // ebx@1
  int v4; // esi@1
  unsigned __int8 v5; // al@1
  char *result; // eax@5
  unsigned int v7; // ebx@6
  char v8; // al@8
  unsigned int v9; // esi@8
  unsigned __int8 v10; // si@9
  unsigned int v11; // ebp@9
  int v12; // edx@9
  char *v13; // ecx@9
  unsigned int v14; // esi@11
  char *v15; // ST2C_4@12
  int v16; // ST28_4@12
  int v17; // eax@12
  int v18; // ebp@14
  char *v19; // ecx@14
  int v20; // edx@16
  int v21; // ST2C_4@17
  char *v22; // ST28_4@17
  unsigned __int8 v23; // al@17
  char *v24; // [sp+20h] [bp-3Ch]@5
  unsigned int v25; // [sp+24h] [bp-38h]@3
  int v26; // [sp+3Ch] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 28);
  *a2 = 0;
  v26 = 0;
  v5 = sub_6F7724A0(a1);
  if ( v5 )
  {
    if ( (v5 & 0x80u) != 0 )
      v25 = ((v5 & 0x7F) << 8) | (unsigned __int8)sub_6F7724A0(v2);
    else
      v25 = v5;
    v24 = sub_6F773B30(v4, 2, 0, v25, 0, &v26);
    result = 0;
    if ( !v26 )
    {
      *v3 = v25;
      v7 = 0;
      while ( v25 > v7 )
      {
        v8 = sub_6F7724A0(v2);
        LOBYTE(v9) = v8;
        if ( v8 >= 0 )
        {
          v18 = (unsigned __int8)sub_6F7724A0(v2);
          v19 = &v24[2 * v7];
          *(_WORD *)v19 = v18;
          if ( !(_BYTE)v9 )
            break;
          v9 = (unsigned __int8)v9;
          v7 += (unsigned __int8)v9 + 1;
          if ( v25 < v7 )
            break;
          v20 = 0;
          do
          {
            v21 = v20;
            v22 = v19;
            v23 = sub_6F7724A0(v2);
            v19 = v22;
            v18 += v23;
            *(_WORD *)&v22[2 * v21 + 2] = v18;
            v20 = v21 + 1;
          }
          while ( v9 > v21 + 1 );
        }
        else
        {
          v10 = v8 & 0x7F;
          v11 = v8 & 0x7F;
          v12 = sub_6F7724C0(v2);
          v13 = &v24[2 * v7];
          *(_WORD *)v13 = v12;
          if ( !v10 )
            break;
          v7 += v10 + 1;
          if ( v25 < v7 )
            break;
          v14 = 0;
          do
          {
            v15 = v13;
            v16 = v12;
            v17 = sub_6F7724C0(v2);
            v13 = v15;
            v12 = v17 + v16;
            *(_WORD *)&v15[2 * v14++ + 2] = v17 + v16;
          }
          while ( v11 > v14 );
        }
      }
      result = v24;
    }
  }
  else
  {
    result = (char *)-1;
  }
  return result;
}
