unsigned int __usercall sub_6F88B460@<eax>(int *a1@<eax>, _BYTE *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v3; // edi@1
  int *v4; // esi@1
  char *v5; // ebx@1
  int v6; // eax@1
  int v7; // ecx@1
  unsigned int v8; // ebp@1
  unsigned __int8 v9; // cf@1
  unsigned int result; // eax@1
  unsigned int v11; // ecx@6
  char *v12; // ebp@6
  int v13; // ecx@6
  int v14; // edx@14
  int v15; // edx@15
  int v16; // edx@16
  int v17; // edx@17
  int v18; // edx@18
  int v19; // edx@19
  int v20; // eax@20
  int v21; // eax@20
  int v22; // eax@20
  int v23; // eax@20
  int v24; // eax@20
  int v25; // eax@20
  int v26; // eax@20
  int v27; // edx@20
  char *v28; // eax@24
  unsigned int v29; // ecx@25
  int v30; // eax@25
  _BYTE *v31; // edx@25
  int v32; // eax@25
  unsigned int v33; // edx@26
  unsigned int v34; // eax@26
  char *v35; // esi@43
  unsigned int v36; // edx@44
  int v37; // esi@44
  int v38; // ebp@44
  unsigned int v39; // edi@44
  unsigned int v40; // ebx@45
  unsigned int v41; // esi@45
  unsigned int v42; // edi@45
  int v43; // ebx@45
  int v44; // edx@13
  int v45; // [sp+0h] [bp-28h]@1
  _BYTE *v46; // [sp+4h] [bp-24h]@25
  unsigned int v47; // [sp+10h] [bp-18h]@26

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *a1;
  v7 = v6 & 0x3F;
  v8 = 64 - v7;
  v9 = __CFADD__(v3, v6);
  result = v3 + v6;
  v45 = v7;
  *v4 = result;
  if ( v9 )
    ++v4[1];
  if ( v7 && v8 <= v3 )
  {
    v28 = (char *)v4 + v7 + 24;
    if ( v8 < 4 )
    {
      if ( 64 != v7 )
      {
        *v28 = *a2;
        if ( v8 & 2 )
          *(_WORD *)&v28[v8 - 2] = *(_WORD *)&a2[v8 - 2];
      }
    }
    else
    {
      *(_DWORD *)v28 = *(_DWORD *)a2;
      v29 = (unsigned int)(v28 + 4) & 0xFFFFFFFC;
      *(_DWORD *)&v28[v8 - 4] = *(_DWORD *)&a2[v8 - 4];
      v30 = (int)&v28[-v29];
      v31 = &a2[-v30];
      v32 = v8 + v30;
      v46 = v31;
      if ( (v32 & 0xFFFFFFFC) >= 4 )
      {
        v47 = v32 & 0xFFFFFFFC;
        v33 = (((v32 & 0xFFFFFFFC) - 1) >> 2) & 7;
        *(_DWORD *)v29 = *(_DWORD *)v46;
        v34 = 4;
        if ( v47 > 4 )
        {
          if ( !v33 )
            goto LABEL_72;
          if ( v33 != 1 )
          {
            if ( v33 != 2 )
            {
              if ( v33 != 3 )
              {
                if ( v33 != 4 )
                {
                  if ( v33 != 5 )
                  {
                    if ( v33 != 6 )
                    {
                      *(_DWORD *)(v29 + 4) = *((_DWORD *)v46 + 1);
                      v34 = 8;
                    }
                    *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
                    v34 += 4;
                  }
                  *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
                  v34 += 4;
                }
                *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
                v34 += 4;
              }
              *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
              v34 += 4;
            }
            *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
            v34 += 4;
          }
          *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
          v34 += 4;
          if ( v34 < v47 )
          {
LABEL_72:
            do
            {
              *(_DWORD *)(v29 + v34) = *(_DWORD *)&v46[v34];
              *(_DWORD *)(v29 + v34 + 4) = *(_DWORD *)&v46[v34 + 4];
              *(_DWORD *)(v29 + v34 + 8) = *(_DWORD *)&v46[v34 + 8];
              *(_DWORD *)(v29 + v34 + 12) = *(_DWORD *)&v46[v34 + 12];
              *(_DWORD *)(v29 + v34 + 16) = *(_DWORD *)&v46[v34 + 16];
              *(_DWORD *)(v29 + v34 + 20) = *(_DWORD *)&v46[v34 + 20];
              *(_DWORD *)(v29 + v34 + 24) = *(_DWORD *)&v46[v34 + 24];
              *(_DWORD *)(v29 + v34 + 28) = *(_DWORD *)&v46[v34 + 28];
              v34 += 32;
            }
            while ( v34 < v47 );
          }
        }
      }
    }
    v5 += v8;
    sub_6F88AD60((int)v4, (int)(v4 + 6));
    result = v45;
    v45 = 0;
    v3 = result + v3 - 64;
    if ( v3 > 0x3F )
      goto LABEL_6;
LABEL_69:
    v12 = v5;
    goto LABEL_22;
  }
  if ( v3 <= 0x3F )
    goto LABEL_69;
LABEL_6:
  v11 = (v3 - 64) & 0xFFFFFFC0;
  v12 = &v5[v11 + 64];
  v13 = ((unsigned __int8)(v11 >> 6) + 1) & 7;
  if ( !v13 )
    goto LABEL_73;
  if ( v13 != 1 )
  {
    if ( v13 != 2 )
    {
      if ( v13 != 3 )
      {
        if ( v13 != 4 )
        {
          if ( v13 != 5 )
          {
            if ( v13 != 6 )
            {
              v44 = (int)v5;
              v5 += 64;
              sub_6F88AD60((int)v4, v44);
            }
            v14 = (int)v5;
            v5 += 64;
            sub_6F88AD60((int)v4, v14);
          }
          v15 = (int)v5;
          v5 += 64;
          sub_6F88AD60((int)v4, v15);
        }
        v16 = (int)v5;
        v5 += 64;
        sub_6F88AD60((int)v4, v16);
      }
      v17 = (int)v5;
      v5 += 64;
      sub_6F88AD60((int)v4, v17);
    }
    v18 = (int)v5;
    v5 += 64;
    sub_6F88AD60((int)v4, v18);
  }
  v19 = (int)v5;
  v5 += 64;
  result = sub_6F88AD60((int)v4, v19);
  if ( v5 != v12 )
  {
LABEL_73:
    do
    {
      v20 = sub_6F88AD60((int)v4, (int)v5);
      v21 = sub_6F88AD60(v20, (int)(v5 + 64));
      v22 = sub_6F88AD60(v21, (int)(v5 + 128));
      v23 = sub_6F88AD60(v22, (int)(v5 + 192));
      v24 = sub_6F88AD60(v23, (int)(v5 + 256));
      v25 = sub_6F88AD60(v24, (int)(v5 + 320));
      v26 = sub_6F88AD60(v25, (int)(v5 + 384));
      v27 = (int)(v5 + 448);
      v5 += 512;
      result = sub_6F88AD60(v26, v27);
    }
    while ( v5 != v12 );
  }
  v3 &= 0x3Fu;
LABEL_22:
  if ( v3 )
  {
    v35 = (char *)v4 + v45 + 24;
    if ( v3 < 4 )
    {
      if ( v3 )
      {
        *v35 = *v12;
        if ( v3 & 2 )
        {
          result = *(_WORD *)&v12[v3 - 2];
          *(_WORD *)&v35[v3 - 2] = result;
        }
      }
    }
    else
    {
      *(_DWORD *)v35 = *(_DWORD *)v12;
      *(_DWORD *)&v35[v3 - 4] = *(_DWORD *)&v12[v3 - 4];
      v36 = (unsigned int)(v35 + 4) & 0xFFFFFFFC;
      v37 = (int)&v35[-v36];
      result = v3 + v37;
      v38 = (int)&v12[-v37];
      v39 = (v3 + v37) & 0xFFFFFFFC;
      if ( v39 >= 4 )
      {
        v40 = v39 - 1;
        v41 = v39;
        v42 = 4;
        v43 = (v40 >> 2) & 7;
        *(_DWORD *)v36 = *(_DWORD *)v38;
        if ( v41 > 4 )
        {
          if ( !v43 )
            goto LABEL_74;
          if ( v43 != 1 )
          {
            if ( v43 != 2 )
            {
              if ( v43 != 3 )
              {
                if ( v43 != 4 )
                {
                  if ( v43 != 5 )
                  {
                    if ( v43 != 6 )
                    {
                      v42 = 8;
                      *(_DWORD *)(v36 + 4) = *(_DWORD *)(v38 + 4);
                    }
                    *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
                    v42 += 4;
                  }
                  *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
                  v42 += 4;
                }
                *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
                v42 += 4;
              }
              *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
              v42 += 4;
            }
            *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
            v42 += 4;
          }
          result = *(_DWORD *)(v38 + v42);
          *(_DWORD *)(v36 + v42) = result;
          v42 += 4;
          if ( v42 < v41 )
          {
LABEL_74:
            do
            {
              *(_DWORD *)(v36 + v42) = *(_DWORD *)(v38 + v42);
              *(_DWORD *)(v36 + v42 + 4) = *(_DWORD *)(v38 + v42 + 4);
              *(_DWORD *)(v36 + v42 + 8) = *(_DWORD *)(v38 + v42 + 8);
              *(_DWORD *)(v36 + v42 + 12) = *(_DWORD *)(v38 + v42 + 12);
              *(_DWORD *)(v36 + v42 + 16) = *(_DWORD *)(v38 + v42 + 16);
              result = *(_DWORD *)(v38 + v42 + 20);
              *(_DWORD *)(v36 + v42 + 20) = result;
              *(_DWORD *)(v36 + v42 + 24) = *(_DWORD *)(v38 + v42 + 24);
              *(_DWORD *)(v36 + v42 + 28) = *(_DWORD *)(v38 + v42 + 28);
              v42 += 32;
            }
            while ( v42 < v41 );
          }
        }
      }
    }
  }
  return result;
}
