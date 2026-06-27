__int64 __thiscall sub_6F8D6FE0(void *this, int a2, int a3, int a4, int a5, int a6, _TBYTE a7)
{
  void *v7; // esp@1
  int v8; // eax@1
  unsigned int v9; // eax@2
  void *v10; // esp@2
  int v11; // edx@3
  void (__cdecl *v12)(unsigned int, _DWORD, char *); // eax@3
  __int64 v13; // rax@4
  unsigned int v15; // [sp+Ch] [bp-A8h]@1
  int *v16; // [sp+10h] [bp-A4h]@3
  char *v17; // [sp+14h] [bp-A0h]@3
  _TBYTE v18; // [sp+20h] [bp-94h]@1
  int v19; // [sp+38h] [bp-7Ch]@2
  char v20; // [sp+3Bh] [bp-79h]@1
  int v21; // [sp+3Ch] [bp-78h]@1
  int v22; // [sp+40h] [bp-74h]@1
  void *v23; // [sp+44h] [bp-70h]@1
  int *v24; // [sp+48h] [bp-6Ch]@1
  __int64 v25; // [sp+4Ch] [bp-68h]@1
  unsigned int v26; // [sp+54h] [bp-60h]@1
  char v27; // [sp+58h] [bp-5Ch]@1
  int v28; // [sp+5Ch] [bp-58h]@1
  int (__cdecl *v29)(int, int, __int64, void (**)(void), int *); // [sp+70h] [bp-44h]@1
  int *v30; // [sp+74h] [bp-40h]@1
  char *v31; // [sp+78h] [bp-3Ch]@1
  int (*v32)(); // [sp+7Ch] [bp-38h]@1
  int *v33; // [sp+80h] [bp-34h]@1
  char v34; // [sp+90h] [bp-24h]@1
  char *v35; // [sp+94h] [bp-20h]@1
  char v36; // [sp+9Ch] [bp-18h]@3
  char v37; // [sp+ACh] [bp-8h]@1

  v23 = this;
  v33 = (int *)&v15;
  v22 = a4;
  v29 = sub_6F962A50;
  v21 = a6;
  v31 = &v37;
  v30 = dword_6F96C114;
  v32 = sub_6F8D71D6;
  sub_6F8A1A60((int *)&v27);
  sub_6F938240(&v34, (volatile signed __int32 **)(a5 + 108));
  v28 = 1;
  v24 = (int *)sub_6F95DC70((int)&v34);
  sub_6F8A13B0(0x50u, v15);
  v7 = alloca(80);
  v33 = (int *)&v15;
  LODWORD(v25) = (unsigned int)&v20 & 0xFFFFFFF0;
  v26 = (unsigned int)&v20 & 0xFFFFFFF0;
  v35 = (char *)sub_6F937FA0();
  *(double *)&v18 = *(double *)&a7;
  v8 = sub_6F959F20((int)&v35, v25, 64, (int)"%.*Lf", 0);
  LODWORD(v25) = v8;
  if ( v8 > 63 )
  {
    LODWORD(v25) = v8 + 1;
    v9 = 16 * ((unsigned int)(v8 + 28) >> 4);
    sub_6F8A13B0(v9, v15);
    v10 = alloca(v9);
    v33 = (int *)&v15;
    v19 = (unsigned int)&v20 & 0xFFFFFFF0;
    v26 = (unsigned int)&v20 & 0xFFFFFFF0;
    v35 = (char *)sub_6F937FA0();
    *(double *)&v18 = *(double *)&a7;
    LODWORD(v25) = sub_6F959F20((int)&v35, v19, v25, (int)"%.*Lf", 0);
  }
  v35 = &v36;
  v28 = 1;
  sub_6F93D2A0(&v35, v25, 0);
  v11 = *v24;
  v17 = v35;
  v15 = v26;
  v16 = (int *)(v26 + v25);
  v12 = *(void (__cdecl **)(unsigned int, _DWORD, char *))(v11 + 44);
  v28 = 2;
  v12(v26, v26 + v25, v35);
  v16 = (int *)&v35;
  v15 = (unsigned __int16)v21;
  if ( (_BYTE)v22 )
  {
    LODWORD(v13) = sub_6F8D7D40(a2, a3, a5, v15, (int)v16);
  }
  else
  {
    v28 = 2;
    LODWORD(v13) = sub_6F8D7220(a2, a3, a5, v15, (int)v16);
  }
  v25 = v13;
  if ( v35 != &v36 )
    j_free_1(v35);
  sub_6F938380((volatile signed __int32 **)&v34);
  sub_6F8A1AD0((int *)&v27);
  return v25;
}
