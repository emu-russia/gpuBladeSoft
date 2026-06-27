__int64 __thiscall sub_6F8C1970(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *v7; // eax@1
  int v8; // eax@1
  int v10; // [sp+0h] [bp-A8h]@1
  char *v11; // [sp+4h] [bp-A4h]@1
  int v12; // [sp+8h] [bp-A0h]@1
  int v13; // [sp+Ch] [bp-9Ch]@1
  int v14; // [sp+10h] [bp-98h]@1
  int v15; // [sp+14h] [bp-94h]@1
  int v16; // [sp+18h] [bp-90h]@1
  _TBYTE v17; // [sp+1Ch] [bp-8Ch]@1
  int *v18; // [sp+28h] [bp-80h]@1
  int v19; // [sp+3Ch] [bp-6Ch]@1
  __int64 v20; // [sp+40h] [bp-68h]@1
  int v21; // [sp+48h] [bp-60h]@1
  char v22; // [sp+4Ch] [bp-5Ch]@1
  int v23; // [sp+50h] [bp-58h]@1
  int (__cdecl *v24)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  __int16 *v25; // [sp+68h] [bp-40h]@1
  char *v26; // [sp+6Ch] [bp-3Ch]@1
  int (*v27)(); // [sp+70h] [bp-38h]@1
  int *v28; // [sp+74h] [bp-34h]@1
  char *v29; // [sp+84h] [bp-24h]@1
  char v30; // [sp+8Ch] [bp-1Ch]@1
  void (__cdecl *v31)(void **); // [sp+9Ch] [bp-Ch]@1
  char v32; // [sp+A0h] [bp-8h]@1

  LODWORD(v20) = this;
  v24 = sub_6F962A50;
  v21 = a4;
  v26 = &v32;
  v19 = a6;
  v25 = &word_6F96B1F2;
  v27 = sub_6F8C1A67;
  v28 = &v10;
  sub_6F8A1A60((int *)&v22);
  v31 = 0;
  v29 = &v30;
  v7 = *(char **)a7;
  LOBYTE(v12) = 0;
  v11 = &v7[2 * *(_DWORD *)(a7 + 4)];
  v23 = 1;
  sub_6F93D4F0((void **)&v29, v7, (int)v11, v12);
  v31 = sub_6F9119A0;
  v18 = (int *)&v29;
  *(double *)&v17 = 0.0;
  v16 = (unsigned __int16)v19;
  v15 = a5;
  v14 = (unsigned __int8)v21;
  v12 = a2;
  v13 = a3;
  v8 = *(_DWORD *)(v20 + 8);
  LOBYTE(v10) = 0;
  v20 = sub_6F910480(v10, v8, a2, a3, (unsigned __int8)v21, a5, (unsigned __int16)v19, v17, (int)&v29);
  if ( v31 )
  {
    v23 = 0;
    v31((void **)&v29);
  }
  sub_6F8A1AD0((int *)&v22);
  return v20;
}
