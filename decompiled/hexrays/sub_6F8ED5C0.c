unsigned int __fastcall sub_6F8ED5C0(unsigned int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6, int a7, _DWORD *a8, int a9)
{
  __int64 v9; // rax@1
  unsigned int v10; // ecx@1
  bool v11; // dl@2
  int v12; // ecx@6
  __int16 *v14; // eax@9
  __int16 v15; // ax@10
  __int16 *v16; // eax@12
  __int16 v17; // ax@13
  char v18; // cl@14
  bool v19; // zf@14
  unsigned int v20; // eax@14
  int (*v21)(void); // eax@18
  int (*v22)(void); // eax@19
  __int64 v23; // [sp+0h] [bp-98h]@1
  int *v24; // [sp+8h] [bp-90h]@1
  int *v25; // [sp+Ch] [bp-8Ch]@1
  char v26; // [sp+2Bh] [bp-6Dh]@1
  unsigned int v27; // [sp+2Ch] [bp-6Ch]@1
  int v28; // [sp+30h] [bp-68h]@1
  unsigned int v29; // [sp+34h] [bp-64h]@1
  int v30; // [sp+38h] [bp-60h]@1
  unsigned int v31; // [sp+3Ch] [bp-5Ch]@1
  unsigned int v32; // [sp+40h] [bp-58h]@1
  char v33; // [sp+44h] [bp-54h]@1
  int v34; // [sp+48h] [bp-50h]@1
  int (__cdecl *v35)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-3Ch]@1
  __int16 *v36; // [sp+60h] [bp-38h]@1
  char *v37; // [sp+64h] [bp-34h]@1
  int (*v38)(); // [sp+68h] [bp-30h]@1
  __int64 *v39; // [sp+6Ch] [bp-2Ch]@1
  __int64 v40; // [sp+78h] [bp-20h]@1
  const char *v41; // [sp+88h] [bp-10h]@1
  int v42; // [sp+8Ch] [bp-Ch]@1
  char v43; // [sp+90h] [bp-8h]@1

  v29 = a1;
  v37 = &v43;
  v32 = a3;
  v30 = a5;
  v31 = a4;
  v35 = sub_6F962A50;
  v28 = a6;
  v36 = &word_6F96B182;
  v38 = sub_6F8ED7C3;
  v39 = &v23;
  sub_6F8A1A60((int *)&v33);
  v24 = &v42;
  v34 = -1;
  v41 = (const char *)sub_6F9081A0(0, 0);
  v34 = 1;
  sub_6F909A00((int *)&v41, 0x20u);
  v9 = sub_6F8EC450(__PAIR__(v31, v32), v30, v28, a7, a8, &v41);
  v10 = v9;
  v40 = v9;
  WORD1(v9) = HIWORD(v31);
  LOWORD(v9) = 0;
  v32 = v10;
  v27 = v10;
  v29 = WORD2(v9) | (unsigned int)v9;
  v42 = sub_6F937FA0();
  v25 = &v42;
  sub_6F959BC0(v41, (double *)a9, a8);
  LOBYTE(v31) = (_WORD)v29 == -1;
  v26 = v31 & (v32 != 0);
  if ( v26 )
  {
    v16 = *(__int16 **)(v32 + 8);
    if ( (unsigned int)v16 >= *(_DWORD *)(v32 + 12) )
    {
      v22 = *(int (**)(void))(*(_DWORD *)v32 + 36);
      v34 = 1;
      v17 = v22();
    }
    else
    {
      v17 = *v16;
    }
    v18 = v26;
    v19 = v17 == -1;
    v20 = 0;
    if ( !v19 )
    {
      v20 = v32;
      if ( !v19 )
        v18 = 0;
    }
    v27 = v20;
    LOBYTE(v31) = v18;
  }
  v11 = (_WORD)v28 == -1;
  if ( v30 && (_WORD)v28 == -1 )
  {
    v14 = *(__int16 **)(v30 + 8);
    if ( (unsigned int)v14 >= *(_DWORD *)(v30 + 12) )
    {
      v21 = *(int (**)(void))(*(_DWORD *)v30 + 36);
      v34 = 1;
      v15 = v21();
    }
    else
    {
      v15 = *v14;
    }
    v11 = v15 == -1;
  }
  if ( (_BYTE)v31 == v11 )
    *a8 |= 2u;
  v12 = (int)v41;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v41 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v12 - 12), (int)&v42);
  sub_6F8A1AD0((int *)&v33);
  return v27;
}
