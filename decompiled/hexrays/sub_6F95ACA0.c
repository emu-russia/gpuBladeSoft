void __cdecl __noreturn sub_6F95ACA0(const char *a1)
{
  int (*(**v1)[3])(); // eax@1
  char *(__thiscall *v2)(char *, int, int); // eax@1
  int v3; // eax@3
  const void *v4; // edx@3
  int v5; // ecx@5
  size_t v6; // eax@5
  int v7; // eax@5
  const void *v8; // edx@5
  int v9; // ecx@7
  int v10; // eax@13
  int v11; // esi@13
  const char *v12; // eax@13
  int v13; // [sp+0h] [bp-A8h]@1
  int v14; // [sp+4h] [bp-A4h]@15
  int *v15; // [sp+10h] [bp-98h]@2
  int (*(**v16)[3])(); // [sp+14h] [bp-94h]@1
  int v17; // [sp+18h] [bp-90h]@1
  char v18; // [sp+1Ch] [bp-8Ch]@1
  int v19; // [sp+20h] [bp-88h]@2
  int (__cdecl *v20)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-74h]@1
  __int16 *v21; // [sp+38h] [bp-70h]@1
  char *v22; // [sp+3Ch] [bp-6Ch]@1
  int (*v23)(); // [sp+40h] [bp-68h]@1
  int *v24; // [sp+44h] [bp-64h]@1
  char *v25; // [sp+58h] [bp-50h]@2
  int v26; // [sp+5Ch] [bp-4Ch]@2
  char v27; // [sp+60h] [bp-48h]@2
  int *v28; // [sp+70h] [bp-38h]@3
  int v29; // [sp+74h] [bp-34h]@5
  int v30; // [sp+78h] [bp-30h]@3
  int *v31; // [sp+88h] [bp-20h]@5
  int v32; // [sp+8Ch] [bp-1Ch]@7
  int v33; // [sp+90h] [bp-18h]@5
  char v34; // [sp+A0h] [bp-8h]@1

  v22 = &v34;
  v20 = sub_6F962A50;
  v21 = &word_6F96C276;
  v23 = sub_6F95AF2C;
  v24 = &v13;
  sub_6F8A1A60((int *)&v18);
  v17 = sub_6F961D10(24);
  v1 = sub_6F8B8D40();
  v16 = v1;
  v2 = (char *(__thiscall *)(char *, int, int))(**v1)[4];
  if ( v2 == sub_6F8BBE40 )
  {
    v26 = 0;
    v15 = (int *)&v25;
    v25 = &v27;
    v27 = 0;
    v19 = 6;
    sub_6F93A0E0((int)&v25, 0, 0, "iostream error", 0xEu);
  }
  else
  {
    v15 = (int *)&v25;
    v19 = 1;
    v14 = (int)v2((char *)&v25, (int)v16, 1);
    v13 = v14;
  }
  v19 = 3;
  v3 = sub_6F93A0E0((int)v15, 0, 0, ": ", 2u);
  v4 = (const void *)(v3 + 8);
  v28 = &v30;
  if ( *(_DWORD *)v3 == v3 + 8 )
  {
    qmemcpy(&v30, v4, 0x10u);
  }
  else
  {
    v28 = *(int **)v3;
    v30 = *(_DWORD *)(v3 + 8);
  }
  v5 = *(_DWORD *)(v3 + 4);
  *(_BYTE *)(v3 + 8) = 0;
  v29 = v5;
  *(_DWORD *)v3 = v4;
  *(_DWORD *)(v3 + 4) = 0;
  v6 = strlen(a1);
  v19 = 4;
  v7 = sub_6F93A0E0((int)&v28, 0, 0, a1, v6);
  v8 = (const void *)(v7 + 8);
  v31 = &v33;
  if ( *(_DWORD *)v7 == v7 + 8 )
  {
    qmemcpy(&v33, v8, 0x10u);
  }
  else
  {
    v31 = *(int **)v7;
    v33 = *(_DWORD *)(v7 + 8);
  }
  v9 = *(_DWORD *)(v7 + 4);
  *(_BYTE *)(v7 + 8) = 0;
  v32 = v9;
  *(_DWORD *)v7 = v8;
  *(_DWORD *)(v7 + 4) = 0;
  v19 = 5;
  sub_6F924BF0((_DWORD *)v17, (int)&v31);
  if ( v31 != &v33 )
    j_free_1(v31);
  if ( v28 != &v30 )
    j_free_1(v28);
  if ( v25 != &v27 )
    j_free_1(v25);
  v10 = v17;
  v11 = (int)v16;
  *(_DWORD *)(v17 + 8) = 1;
  *(_DWORD *)(v10 + 12) = v11;
  *(_DWORD *)v10 = off_6FBB0370;
  v12 = (const char *)sub_6F8C1D20(v10);
  v19 = 2;
  sub_6F95B920((_DWORD *)(v17 + 16), v12);
  v19 = -1;
  sub_6F9628A0(v17, (int)&off_6FBAC758, (int)sub_6F914FC0);
}
