unsigned int *__thiscall sub_6F8D91B0(int *this, int a2, int a3, int a4)
{
  int v4; // eax@1
  int v5; // ecx@1
  unsigned int v6; // eax@2
  unsigned int *v7; // ecx@5
  int v8; // ebx@5
  unsigned int v9; // edx@5
  unsigned int v10; // eax@5
  unsigned int v11; // eax@6
  size_t v12; // eax@8
  int v13; // eax@8
  int v15; // [sp+0h] [bp-88h]@1
  char *v16; // [sp+8h] [bp-80h]@1
  char v17; // [sp+Ch] [bp-7Ch]@1
  const char *v18; // [sp+18h] [bp-70h]@1
  char *v19; // [sp+1Ch] [bp-6Ch]@1
  int v20; // [sp+20h] [bp-68h]@1
  int v21; // [sp+24h] [bp-64h]@2
  unsigned int v22; // [sp+28h] [bp-60h]@2
  char *v23; // [sp+2Ch] [bp-5Ch]@1
  unsigned int *v24; // [sp+30h] [bp-58h]@1
  unsigned int v25; // [sp+34h] [bp-54h]@1
  const char *v26; // [sp+38h] [bp-50h]@1
  char v27; // [sp+3Ch] [bp-4Ch]@1
  int v28; // [sp+40h] [bp-48h]@1
  int (__cdecl *v29)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  int *v30; // [sp+58h] [bp-30h]@1
  char *v31; // [sp+5Ch] [bp-2Ch]@1
  int (*v32)(); // [sp+60h] [bp-28h]@1
  int *v33; // [sp+64h] [bp-24h]@1
  char v34; // [sp+7Fh] [bp-9h]@1
  char v35; // [sp+80h] [bp-8h]@1

  v31 = &v35;
  v24 = (unsigned int *)this;
  v29 = sub_6F962A50;
  v30 = dword_6F96B36C;
  v32 = sub_6F8D939B;
  v33 = &v15;
  sub_6F8A1A60((int *)&v27);
  v19 = &v34;
  v16 = &v34;
  v28 = -1;
  *v24 = (unsigned int)sub_6F9081A0(0, 0);
  v17 = 0;
  v16 = v19;
  v28 = 1;
  v4 = sub_6F908280((_BYTE *)a3, (_BYTE *)a4);
  v5 = *(_DWORD *)(v4 - 12);
  v18 = (const char *)v4;
  v20 = v4 + v5;
  v25 = 2 * (a4 - a3);
  v28 = 2;
  v23 = (char *)sub_6F961B40(2 * (a4 - a3));
  v26 = v18;
  while ( 1 )
  {
    v11 = sub_6F8D9180(v23, v26, v25);
    if ( v25 <= v11 )
    {
      v25 = v11 + 1;
      j_j_free_1(v23);
      v28 = 5;
      v23 = (char *)sub_6F961B40(v25);
      v11 = sub_6F8D9180(v23, v26, v25);
    }
    v28 = 3;
    sub_6F908AF0(v24, (unsigned int)v23, v11);
    v12 = strlen(v26);
    v13 = (int)&v26[v12];
    if ( v20 == v13 )
      break;
    v26 = (const char *)(v13 + 1);
    v6 = *v24;
    v21 = *(_DWORD *)(*v24 - 12);
    v22 = v21 + 1;
    if ( (unsigned int)(v21 + 1) > *(_DWORD *)(v6 - 8) || *(_DWORD *)(v6 - 4) > 0 )
    {
      v28 = 3;
      sub_6F909A00((int *)v24, v22);
    }
    v7 = v24;
    v8 = v21;
    *(_BYTE *)(*v24 + *(_DWORD *)(*v24 - 12)) = 0;
    v9 = v22;
    v10 = *v7;
    *(_DWORD *)(v10 - 4) = 0;
    *(_DWORD *)(v10 - 12) = v9;
    *(_BYTE *)(v10 + v8 + 1) = 0;
  }
  j_j_free_1(v23);
  sub_6F9086F0((int)(v18 - 12), (int)v19);
  sub_6F8A1AD0((int *)&v27);
  return v24;
}
