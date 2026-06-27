__int64 __cdecl sub_6F910150(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _TBYTE a8, int a9)
{
  int v9; // eax@3
  int (__thiscall *v10)(int, int, int, _DWORD, int, _DWORD, int *); // eax@3
  __int64 v11; // rax@3
  int v12; // ecx@3
  int v14; // edx@6
  int (__thiscall *v15)(int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD); // eax@6
  __int64 v16; // rax@6
  _BYTE *v17; // [sp+18h] [bp-78h]@1
  int v18; // [sp+1Ch] [bp-74h]@3
  char *v19; // [sp+20h] [bp-70h]@3
  int v20; // [sp+24h] [bp-6Ch]@3
  int v21; // [sp+28h] [bp-68h]@3
  _TBYTE v22; // [sp+2Ch] [bp-64h]@3
  __int64 v23; // [sp+38h] [bp-58h]@1
  int v24; // [sp+40h] [bp-50h]@1
  char v25; // [sp+44h] [bp-4Ch]@1
  int v26; // [sp+48h] [bp-48h]@3
  int (__cdecl *v27)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-34h]@1
  int *v28; // [sp+60h] [bp-30h]@1
  char *v29; // [sp+64h] [bp-2Ch]@1
  int (*v30)(); // [sp+68h] [bp-28h]@1
  int *v31; // [sp+6Ch] [bp-24h]@1
  char v32; // [sp+83h] [bp-Dh]@3
  int v33; // [sp+84h] [bp-Ch]@3
  char v34; // [sp+88h] [bp-8h]@1

  v27 = sub_6F962A50;
  v28 = &dword_6F96C420;
  LODWORD(v23) = a5;
  v30 = sub_6F9102B6;
  v24 = a7;
  v29 = &v34;
  v31 = (int *)&v17;
  sub_6F8A1A60((int *)&v25);
  if ( a9 )
  {
    if ( !*(_DWORD *)(a9 + 24) )
    {
      v26 = -1;
      sub_6F95AFD0("uninitialized __any_string");
    }
    v19 = &v32;
    v18 = *(_DWORD *)(a9 + 4);
    v17 = *(_BYTE **)a9;
    v26 = -1;
    sub_6F909D80(&v33, v17, v18, (int)&v32);
    v9 = *(_DWORD *)a2;
    LODWORD(v22) = &v33;
    v21 = (char)v24;
    v20 = a6;
    v19 = (char *)(unsigned __int8)v23;
    v18 = a4;
    v17 = (_BYTE *)a3;
    v10 = *(int (__thiscall **)(int, int, int, _DWORD, int, _DWORD, int *))(v9 + 12);
    v26 = 1;
    LODWORD(v11) = v10(a2, a3, a4, (unsigned __int8)v23, a6, (char)v24, &v33);
    v23 = v11;
    v12 = v33;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 - 4), 0xFFFFFFFF) <= 0 )
      sub_6F9086D0((void *)(v12 - 12), (int)&v32);
  }
  else
  {
    v14 = *(_DWORD *)a2;
    *(double *)&v22 = *(double *)&a8;
    v21 = (char)v24;
    v20 = a6;
    v19 = (char *)(unsigned __int8)v23;
    v17 = (_BYTE *)a3;
    v18 = a4;
    v15 = *(int (__thiscall **)(int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(v14 + 8);
    v26 = -1;
    LODWORD(v16) = v15(a2, a3, a4, (unsigned __int8)v23, a6, (char)v24, LODWORD(a8), DWORD1(a8), *((_DWORD *)&v22 + 2));
    v23 = v16;
  }
  sub_6F8A1AD0((int *)&v25);
  return v23;
}
