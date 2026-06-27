signed int __usercall sub_6F69B6E0@<eax>(const char **a1@<eax>)
{
  const char **v1; // ebx@1
  FILE *v2; // eax@1
  FILE *v3; // esi@2
  __int16 *v4; // edi@4
  unsigned __int16 v5; // dx@5
  unsigned __int16 v6; // ax@6
  signed int v7; // edi@6
  signed int v8; // ebx@8
  int v9; // edx@9
  signed int result; // eax@11
  unsigned __int16 v11; // cx@13
  unsigned __int16 v12; // ax@14
  signed int v13; // ebp@14
  signed int v14; // ebx@16
  int v15; // ecx@17
  signed int v16; // ebx@20
  signed int v17; // ebx@23
  const char *v18; // ST08_4@31
  unsigned __int16 v19; // [sp+1Eh] [bp-3Eh]@5
  unsigned __int16 v20; // [sp+20h] [bp-3Ch]@5
  unsigned __int16 v21; // [sp+22h] [bp-3Ah]@5
  unsigned __int16 v22; // [sp+24h] [bp-38h]@5
  unsigned __int16 v23; // [sp+26h] [bp-36h]@13
  unsigned __int16 v24; // [sp+28h] [bp-34h]@13
  unsigned __int16 v25; // [sp+2Ah] [bp-32h]@13
  unsigned __int16 v26; // [sp+2Ch] [bp-30h]@13
  unsigned __int16 v27; // [sp+2Eh] [bp-2Eh]@9
  unsigned __int16 v28; // [sp+30h] [bp-2Ch]@4
  char v29; // [sp+34h] [bp-28h]@13
  char v30; // [sp+38h] [bp-24h]@2
  char v31; // [sp+3Ch] [bp-20h]@3

  v1 = a1;
  v2 = fopen(*a1, "rb");
  if ( v2 )
  {
    v3 = v2;
    fread(&v30, 8u, 1u, v2);
    if ( v30 != 16 )
    {
LABEL_11:
      nullsub_10();
      fclose(v3);
      return -1;
    }
    if ( v31 & 8 )
    {
      fread(&v29, 4u, 1u, v3);
      fread(&v26, 2u, 1u, v3);
      fread(&v25, 2u, 1u, v3);
      fread(&v24, 2u, 1u, v3);
      fread(&v23, 2u, 1u, v3);
      nullsub_10();
      nullsub_10();
      v11 = v23;
      if ( v23 )
      {
        v12 = v24;
        v13 = 0;
        v4 = (__int16 *)&v28;
        while ( 1 )
        {
          if ( v12 )
          {
            v14 = 0;
            do
            {
              if ( fread(&v28, 1u, 2u, v3) <= 1 )
              {
                nullsub_10();
                return -1;
              }
              v15 = v14++ + v26;
              dword_6FBB51EC(v15, v13 + v25, v28);
              v12 = v24;
            }
            while ( v24 > v14 );
            v17 = v23;
            v11 = v23;
          }
          else
          {
            ++v13;
            v17 = v11;
            if ( v11 <= v13 )
              goto LABEL_5;
          }
          if ( v17 <= ++v13 )
            goto LABEL_5;
        }
      }
    }
    v4 = (__int16 *)&v28;
LABEL_5:
    fread(v4, 4u, 1u, v3);
    fread(&v22, 2u, 1u, v3);
    fread(&v21, 2u, 1u, v3);
    fread(&v20, 2u, 1u, v3);
    fread(&v19, 2u, 1u, v3);
    nullsub_10();
    nullsub_10();
    nullsub_10();
    v5 = v19;
    if ( v19 )
    {
      v6 = v20;
      v7 = 0;
      while ( !v6 )
      {
        ++v7;
        v16 = v5;
        if ( v7 >= v5 )
          goto LABEL_22;
LABEL_21:
        if ( v16 <= ++v7 )
          goto LABEL_22;
      }
      v8 = 0;
      while ( fread(&v27, 1u, 2u, v3) > 1 )
      {
        v9 = v8++ + v22;
        dword_6FBB51EC(v9, v7 + v21, v27);
        v6 = v20;
        if ( v20 <= v8 )
        {
          v16 = v19;
          v5 = v19;
          goto LABEL_21;
        }
      }
      goto LABEL_11;
    }
LABEL_22:
    fclose(v3);
    result = 0;
  }
  else
  {
    v18 = *v1;
    nullsub_10();
    result = -1;
  }
  return result;
}
