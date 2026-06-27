void *__thiscall sub_6F8C3C20(void *this, int a2)
{
  _BYTE *v2; // eax@1
  int v3; // ebx@1
  const char *v4; // edx@3
  int v5; // eax@4
  unsigned int v6; // eax@6
  int v7; // eax@7
  unsigned int v8; // edx@8
  const char *v9; // ebx@11
  const char *v10; // ecx@11
  _DWORD *v11; // eax@11
  unsigned int v12; // eax@11
  int v13; // eax@13
  unsigned int v14; // edx@14
  size_t v15; // ecx@17
  const char *v16; // ebx@17
  const char *v17; // edx@17
  _DWORD *v18; // eax@17
  unsigned int v19; // eax@17
  int v20; // eax@18
  unsigned int v21; // edx@19
  size_t v22; // ecx@22
  const char *v23; // ebx@22
  const char *v24; // edx@22
  _DWORD *v25; // eax@22
  unsigned int v26; // eax@22
  size_t v28; // eax@25
  int v29; // [sp+7Ch] [bp-68h]@1
  const char *v30; // [sp+90h] [bp-54h]@1
  size_t v31; // [sp+94h] [bp-50h]@1
  int v32; // [sp+98h] [bp-4Ch]@1
  const char *v33; // [sp+9Ch] [bp-48h]@4
  const char *v34; // [sp+A0h] [bp-44h]@3
  void *v35; // [sp+A4h] [bp-40h]@1
  char v36; // [sp+A8h] [bp-3Ch]@1
  int v37; // [sp+ACh] [bp-38h]@6
  int (__cdecl *v38)(int, int, __int64, void (**)(void), int *); // [sp+C0h] [bp-24h]@1
  char *v39; // [sp+C4h] [bp-20h]@1
  char *v40; // [sp+C8h] [bp-1Ch]@1
  void *v41; // [sp+CCh] [bp-18h]@1
  int *v42; // [sp+D0h] [bp-14h]@1
  char v43; // [sp+DCh] [bp-8h]@1

  v40 = &v43;
  v35 = this;
  v38 = sub_6F962A50;
  v39 = byte_6F96AA85;
  v41 = &loc_6F8C408F;
  v42 = &v29;
  sub_6F8A1A60((int *)&v36);
  v2 = v35;
  v3 = (int)v35 + 8;
  *((_DWORD *)v35 + 1) = 0;
  *(_DWORD *)v2 = v3;
  v2[8] = 0;
  v32 = v3;
  v31 = *(_DWORD *)(*(_DWORD *)a2 + 16);
  v30 = *(const char **)v31;
  if ( v30 )
  {
    if ( !*(_DWORD *)(v31 + 4) )
      goto LABEL_37;
    v34 = 0;
    v4 = v30;
    do
    {
      v33 = *(const char **)(v31 + 4 * (_DWORD)++v34);
      v5 = strcmp(v4, v33);
      v4 = v33;
    }
    while ( v5 == 0 && (unsigned int)v34 <= 4 );
    if ( v5 )
    {
      v37 = 1;
      sub_6F93BF60((int)v35, 0x80u);
      v34 = "LC_CTYPE";
      v6 = strlen("LC_CTYPE");
      if ( v6 > 0x7FFFFFFF - *((_DWORD *)v35 + 1) )
        sub_6F95B240("basic_string::append");
      v37 = 1;
      sub_6F93C0E0((int)v35, v34, v6);
      v33 = (const char *)*((_DWORD *)v35 + 1);
      v34 = v33 + 1;
      v7 = *(_DWORD *)v35;
      if ( v32 == *(_DWORD *)v35 )
        v8 = 15;
      else
        v8 = *((_DWORD *)v35 + 2);
      if ( (unsigned int)v34 > v8 )
      {
        v37 = 1;
        sub_6F93C2B0((int)v35, (size_t)v33, 0, 0, 1u);
        v7 = *(_DWORD *)v35;
      }
      v9 = v33;
      v10 = v34;
      v33[v7] = 61;
      v11 = v35;
      *((_DWORD *)v35 + 1) = v10;
      v9[*v11 + 1] = 0;
      v34 = **(const char ***)(*(_DWORD *)a2 + 16);
      v12 = strlen(v34);
      if ( v12 > 0x7FFFFFFF - *((_DWORD *)v35 + 1) )
      {
        v37 = 1;
        sub_6F95B240("basic_string::append");
      }
      v37 = 1;
      sub_6F93C0E0((int)v35, v34, v12);
      v34 = (const char *)4;
      do
      {
        v31 = *((_DWORD *)v35 + 1);
        v33 = (const char *)(v31 + 1);
        v13 = *(_DWORD *)v35;
        if ( v32 == *(_DWORD *)v35 )
          v14 = 15;
        else
          v14 = *((_DWORD *)v35 + 2);
        if ( (unsigned int)v33 > v14 )
        {
          v37 = 1;
          sub_6F93C2B0((int)v35, v31, 0, 0, 1u);
          v13 = *(_DWORD *)v35;
        }
        v15 = v31;
        v16 = v33;
        v17 = v34;
        *(_BYTE *)(v13 + v31) = 59;
        v18 = v35;
        *((_DWORD *)v35 + 1) = v16;
        *(_BYTE *)(*v18 + v15 + 1) = 0;
        v33 = *(const char **)&v17[(_DWORD)off_6FBAB7B8];
        v19 = strlen(v33);
        if ( v19 > 0x7FFFFFFF - *((_DWORD *)v35 + 1) )
        {
          v37 = 1;
          sub_6F95B240("basic_string::append");
        }
        v37 = 1;
        sub_6F93C0E0((int)v35, v33, v19);
        v20 = *(_DWORD *)v35;
        v31 = *((_DWORD *)v35 + 1);
        v33 = (const char *)(v31 + 1);
        if ( v32 == v20 )
          v21 = 15;
        else
          v21 = *((_DWORD *)v35 + 2);
        if ( (unsigned int)v33 > v21 )
        {
          v37 = 1;
          sub_6F93C2B0((int)v35, v31, 0, 0, 1u);
          v20 = *(_DWORD *)v35;
        }
        v22 = v31;
        v23 = v33;
        v24 = v34;
        *(_BYTE *)(v20 + v31) = 61;
        v25 = v35;
        *((_DWORD *)v35 + 1) = v23;
        *(_BYTE *)(*v25 + v22 + 1) = 0;
        v33 = *(const char **)&v24[*(_DWORD *)(*(_DWORD *)a2 + 16)];
        v26 = strlen(v33);
        if ( v26 > 0x7FFFFFFF - *((_DWORD *)v35 + 1) )
        {
          v37 = 1;
          sub_6F95B240("basic_string::append");
        }
        v37 = 1;
        sub_6F93C0E0((int)v35, v33, v26);
        v34 += 4;
      }
      while ( v34 != (const char *)24 );
    }
    else
    {
LABEL_37:
      v28 = strlen(v30);
      v37 = 1;
      sub_6F93A0E0((int)v35, 0, 0, v30, v28);
    }
  }
  else
  {
    v37 = 1;
    sub_6F93A950((int)v35, 0, 0, 1u, 42);
  }
  sub_6F8A1AD0((int *)&v36);
  return v35;
}
