void *__thiscall sub_6F8C94A0(void *this, int a2, int a3, int a4)
{
  _BYTE *v4; // eax@1
  int v5; // ebx@1
  size_t v6; // ebx@2
  int v7; // edx@2
  _DWORD *v8; // eax@2
  unsigned int v9; // eax@3
  size_t v10; // eax@6
  int v11; // eax@6
  int v12; // eax@7
  unsigned int v13; // edx@8
  int v15; // [sp+0h] [bp-98h]@1
  int v16; // [sp+8h] [bp-90h]@1
  int v17; // [sp+1Ch] [bp-7Ch]@1
  char *v18; // [sp+20h] [bp-78h]@1
  size_t v19; // [sp+24h] [bp-74h]@2
  unsigned int v20; // [sp+28h] [bp-70h]@2
  char *v21; // [sp+2Ch] [bp-6Ch]@1
  unsigned int v22; // [sp+30h] [bp-68h]@1
  const char *v23; // [sp+34h] [bp-64h]@1
  void *v24; // [sp+38h] [bp-60h]@1
  char v25; // [sp+3Ch] [bp-5Ch]@1
  int v26; // [sp+40h] [bp-58h]@1
  int (__cdecl *v27)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-44h]@1
  int *v28; // [sp+58h] [bp-40h]@1
  char *v29; // [sp+5Ch] [bp-3Ch]@1
  const char *v30; // [sp+60h] [bp-38h]@1
  int *v31; // [sp+64h] [bp-34h]@1
  char *v32; // [sp+78h] [bp-20h]@1
  int v33; // [sp+7Ch] [bp-1Ch]@1
  char v34; // [sp+80h] [bp-18h]@1
  char v35; // [sp+90h] [bp-8h]@1

  v29 = &v35;
  v24 = this;
  v27 = sub_6F962A50;
  v28 = dword_6F96B6A8;
  v30 = "ƒÅ\b‹E¬‰Eœ‹E¨…Àu$‹E ‹";
  v31 = &v15;
  sub_6F8A1A60((int *)&v25);
  v4 = v24;
  v5 = (int)v24 + 8;
  *((_DWORD *)v24 + 1) = 0;
  *(_DWORD *)v4 = v5;
  v4[8] = 0;
  v32 = &v34;
  v17 = v5;
  LOBYTE(v16) = 0;
  v26 = 1;
  sub_6F93A600((int)&v32, (_BYTE *)a3, (_BYTE *)a4, v16);
  v23 = v32;
  v18 = &v32[v33];
  v22 = 2 * (a4 - a3);
  v26 = 2;
  v21 = (char *)sub_6F961B40(2 * (a4 - a3));
  while ( 1 )
  {
    v9 = sub_6F8C9470(v21, v23, v22);
    if ( v22 <= v9 )
    {
      v22 = v9 + 1;
      j_j_free_1(v21);
      v26 = 5;
      v21 = (char *)sub_6F961B40(v22);
      v9 = sub_6F8C9470(v21, v23, v22);
    }
    if ( v9 > 0x7FFFFFFF - *((_DWORD *)v24 + 1) )
    {
      v26 = 3;
      sub_6F95B240("basic_string::append");
    }
    v26 = 3;
    sub_6F93C0E0((int)v24, v21, v9);
    v10 = strlen(v23);
    v11 = (int)&v23[v10];
    if ( v18 == (char *)v11 )
      break;
    v23 = (const char *)(v11 + 1);
    v12 = *(_DWORD *)v24;
    v19 = *((_DWORD *)v24 + 1);
    v20 = v19 + 1;
    if ( v17 == v12 )
      v13 = 15;
    else
      v13 = *((_DWORD *)v24 + 2);
    if ( v20 > v13 )
    {
      v26 = 3;
      sub_6F93C2B0((int)v24, v19, 0, 0, 1u);
      v12 = *(_DWORD *)v24;
    }
    v6 = v19;
    v7 = v20;
    *(_BYTE *)(v12 + v19) = 0;
    v8 = v24;
    *((_DWORD *)v24 + 1) = v7;
    *(_BYTE *)(*v8 + v6 + 1) = 0;
  }
  j_j_free_1(v21);
  if ( v32 != &v34 )
    j_free_1(v32);
  sub_6F8A1AD0((int *)&v25);
  return v24;
}
