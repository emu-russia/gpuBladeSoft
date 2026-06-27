__int64 __cdecl sub_6F9102F0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _TBYTE a8, int a9)
{
  _BYTE *v9; // eax@3
  int v10; // edx@3
  int v11; // eax@3
  int (__thiscall *v12)(int, int, int, _DWORD, int, _DWORD, char **); // eax@3
  __int64 v13; // rax@3
  int v15; // edx@6
  int (__thiscall *v16)(int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD); // eax@6
  __int64 v17; // rax@6
  int v18; // [sp+18h] [bp-88h]@1
  int v19; // [sp+1Ch] [bp-84h]@3
  int v20; // [sp+20h] [bp-80h]@3
  int v21; // [sp+24h] [bp-7Ch]@3
  int v22; // [sp+28h] [bp-78h]@3
  _TBYTE v23; // [sp+2Ch] [bp-74h]@3
  __int64 v24; // [sp+38h] [bp-68h]@1
  int v25; // [sp+40h] [bp-60h]@1
  char v26; // [sp+44h] [bp-5Ch]@1
  int v27; // [sp+48h] [bp-58h]@3
  int (__cdecl *v28)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-44h]@1
  int *v29; // [sp+60h] [bp-40h]@1
  char *v30; // [sp+64h] [bp-3Ch]@1
  int (*v31)(); // [sp+68h] [bp-38h]@1
  int *v32; // [sp+6Ch] [bp-34h]@1
  char *v33; // [sp+80h] [bp-20h]@3
  char v34; // [sp+88h] [bp-18h]@3
  char v35; // [sp+98h] [bp-8h]@1

  v28 = sub_6F962A50;
  v29 = &dword_6F96B280;
  LODWORD(v24) = a5;
  v31 = sub_6F91044D;
  v25 = a7;
  v30 = &v35;
  v32 = &v18;
  sub_6F8A1A60((int *)&v26);
  if ( a9 )
  {
    if ( !*(_DWORD *)(a9 + 24) )
    {
      v27 = -1;
      sub_6F95AFD0("uninitialized __any_string");
    }
    v33 = &v34;
    v9 = *(_BYTE **)a9;
    LOBYTE(v20) = 0;
    v10 = *(_DWORD *)(a9 + 4);
    v27 = -1;
    sub_6F93A600((int)&v33, v9, &v9[v10], v20);
    v11 = *(_DWORD *)a2;
    LODWORD(v23) = &v33;
    v22 = (char)v25;
    v21 = a6;
    v20 = (unsigned __int8)v24;
    v19 = a4;
    v18 = a3;
    v12 = *(int (__thiscall **)(int, int, int, _DWORD, int, _DWORD, char **))(v11 + 12);
    v27 = 1;
    LODWORD(v13) = v12(a2, a3, a4, (unsigned __int8)v24, a6, (char)v25, &v33);
    v24 = v13;
    if ( v33 != &v34 )
      j_free_1(v33);
  }
  else
  {
    v15 = *(_DWORD *)a2;
    *(double *)&v23 = *(double *)&a8;
    v22 = (char)v25;
    v21 = a6;
    v20 = (unsigned __int8)v24;
    v18 = a3;
    v19 = a4;
    v16 = *(int (__thiscall **)(int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(v15 + 8);
    v27 = -1;
    LODWORD(v17) = v16(a2, a3, a4, (unsigned __int8)v24, a6, (char)v25, LODWORD(a8), DWORD1(a8), *((_DWORD *)&v23 + 2));
    v24 = v17;
  }
  sub_6F8A1AD0((int *)&v26);
  return v24;
}
