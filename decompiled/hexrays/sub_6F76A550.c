int __cdecl sub_6F76A550(int *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // ebp@1
  int v7; // edi@1
  unsigned __int32 v8; // eax@1
  int v9; // edx@1
  signed int v10; // ecx@2
  int result; // eax@5
  unsigned __int16 v12; // ax@10
  int v13; // ebp@14
  unsigned __int32 v14; // eax@19
  unsigned __int32 v15; // edi@19
  unsigned __int32 v16; // eax@21
  unsigned __int32 v17; // eax@16
  int v18; // ecx@30
  void *v19; // eax@33
  int v20; // esi@33
  const char *v21; // eax@35
  unsigned __int32 v22; // eax@43
  unsigned __int32 v23; // edi@43
  unsigned __int32 v24; // eax@45
  unsigned __int32 v25; // eax@46
  unsigned __int16 v26; // [sp+28h] [bp-44h]@11
  signed int v27; // [sp+28h] [bp-44h]@14
  int v28; // [sp+28h] [bp-44h]@30
  int v29; // [sp+28h] [bp-44h]@40
  int v30; // [sp+2Ch] [bp-40h]@16
  int v31; // [sp+2Ch] [bp-40h]@40
  int v32; // [sp+30h] [bp-3Ch]@12
  char v33; // [sp+34h] [bp-38h]@14
  unsigned __int32 v34; // [sp+34h] [bp-38h]@45
  int v35; // [sp+38h] [bp-34h]@14
  int v36; // [sp+3Ch] [bp-30h]@14
  int v37; // [sp+4Ch] [bp-20h]@1

  v6 = *a1;
  v7 = sub_6F7720A0(a2);
  v8 = sub_6F7727E0(a2, &v37);
  v9 = v37;
  if ( v37 )
    goto LABEL_54;
  v10 = 2;
  v9 = 2;
  if ( v8 != 1954115633 )
  {
LABEL_3:
    v37 = v9;
    goto LABEL_4;
  }
  v12 = sub_6F772620(a2, &v37);
  v9 = v37;
  if ( v37 || (v26 = v12, v9 = sub_6F772040(a2, 6), (v37 = v9) != 0) )
  {
LABEL_54:
    v10 = (unsigned __int8)v9;
    goto LABEL_3;
  }
  v32 = v26;
  if ( !v26 )
  {
LABEL_29:
    v10 = 142;
    v9 = 142;
    goto LABEL_3;
  }
  if ( a3 < 0 )
  {
    v31 = 0;
    v29 = v7;
    do
    {
      v22 = sub_6F7727E0(a2, &v37);
      v9 = v37;
      v23 = v22;
      if ( v37
        || (v9 = sub_6F772040(a2, 4), (v37 = v9) != 0)
        || (v24 = sub_6F7727E0(a2, &v37), v9 = v37, v34 = v24, v37)
        || (v25 = sub_6F7727E0(a2, &v37), (v9 = v37) != 0) )
      {
        v7 = v29;
        goto LABEL_26;
      }
      if ( v23 == 1128875040 )
      {
        v7 = v29;
        v18 = v34 + 22;
        v28 = v25 - 22;
        v33 = 1;
        goto LABEL_31;
      }
      if ( v23 == 1415139377 )
      {
        v7 = v29;
        v18 = v34 + 24;
        v28 = v25 - 24;
        v33 = 0;
        goto LABEL_31;
      }
      ++v31;
    }
    while ( v32 != v31 );
    v7 = v29;
    goto LABEL_29;
  }
  v36 = v6;
  v33 = 0;
  v27 = -1;
  v35 = v7;
  v13 = 0;
  while ( 1 )
  {
    v14 = sub_6F7727E0(a2, &v37);
    v9 = v37;
    v15 = v14;
    if ( v37
      || (v9 = sub_6F772040(a2, 4), (v37 = v9) != 0)
      || (v16 = sub_6F7727E0(a2, &v37), v9 = v37, v30 = v16, v37)
      || (v17 = sub_6F7727E0(a2, &v37), (v9 = v37) != 0) )
    {
      v7 = v35;
      goto LABEL_26;
    }
    if ( v15 == 1128875040 )
    {
      ++v27;
      v30 += 22;
      v17 -= 22;
      v33 = 1;
    }
    else if ( v15 == 1415139377 )
    {
      ++v27;
      v30 += 24;
      v17 -= 24;
      v33 = 0;
    }
    if ( a3 == v27 )
      break;
    if ( v32 == ++v13 )
    {
      v7 = v35;
      goto LABEL_29;
    }
  }
  v6 = v36;
  v7 = v35;
  v18 = v30;
  v28 = v17;
LABEL_31:
  v37 = 0;
  if ( sub_6F771FF0(a2, v7 + v18) )
  {
    v9 = v37;
    v10 = (unsigned __int8)v37;
  }
  else
  {
    v19 = sub_6F773A50(v6, v28, &v37);
    v9 = v37;
    v20 = (int)v19;
    if ( !v37 )
    {
      v9 = sub_6F7720B0(a2, v19, v28);
      v37 = v9;
      if ( !v9 )
      {
        v21 = "type1";
        if ( v33 )
          v21 = "cid";
        if ( a3 <= 0 )
          v9 = a3;
        v9 = sub_6F76A3D0((int)a1, v20, v28, v9, v21, a6);
LABEL_26:
        v37 = v9;
      }
    }
    v10 = (unsigned __int8)v9;
  }
LABEL_4:
  if ( v10 == 2 )
  {
    result = sub_6F771FF0(a2, v7);
    if ( !result )
      result = v37;
  }
  else
  {
    result = v9;
  }
  return result;
}
