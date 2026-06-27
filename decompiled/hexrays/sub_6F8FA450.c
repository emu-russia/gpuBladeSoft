unsigned int __thiscall sub_6F8FA450(char *this, unsigned int a2, unsigned int a3, int a4, __int16 a5, int a6, int a7, _DWORD *a8, int *a9)
{
  __int64 v9; // rax@2
  _DWORD *v10; // ecx@3
  unsigned int v11; // eax@3
  char *v12; // eax@4
  int v13; // ecx@6
  void (__thiscall *v14)(int *); // eax@6
  __int64 v16; // [sp+Ch] [bp-88h]@1
  char *v17; // [sp+14h] [bp-80h]@1
  int *v18; // [sp+24h] [bp-70h]@1
  int *v19; // [sp+2Ch] [bp-68h]@1
  int v20; // [sp+30h] [bp-64h]@1
  char *v21; // [sp+34h] [bp-60h]@1
  unsigned int v22; // [sp+38h] [bp-5Ch]@1
  unsigned int v23; // [sp+3Ch] [bp-58h]@1
  char v24; // [sp+40h] [bp-54h]@1
  int v25; // [sp+44h] [bp-50h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+58h] [bp-3Ch]@1
  __int16 *v27; // [sp+5Ch] [bp-38h]@1
  char *v28; // [sp+60h] [bp-34h]@1
  int (*v29)(); // [sp+64h] [bp-30h]@1
  __int64 *v30; // [sp+68h] [bp-2Ch]@1
  __int64 v31; // [sp+74h] [bp-20h]@3
  char v32; // [sp+87h] [bp-Dh]@1
  _DWORD *v33; // [sp+88h] [bp-Ch]@1
  char v34; // [sp+8Ch] [bp-8h]@1

  v21 = this;
  v26 = sub_6F962A50;
  v23 = a2;
  v28 = &v34;
  v22 = a3;
  v20 = a6;
  v27 = &word_6F96B1C2;
  v29 = sub_6F8FA625;
  v30 = &v16;
  sub_6F8A1A60((int *)&v24);
  v25 = -1;
  v19 = (int *)sub_6F95DC70(a7 + 108);
  v17 = &v32;
  v33 = sub_6F9081A0(0, 0);
  v18 = (int *)&v33;
  if ( (_BYTE)v20 )
  {
    v25 = 1;
    v9 = sub_6F8F9890(__PAIR__(v22, v23), a4, a5, a7, a8, (int)v18);
  }
  else
  {
    v25 = 1;
    v9 = sub_6F8F8CF0(__PAIR__(v22, v23), a4, a5, a7, a8, (int)v18);
  }
  v31 = v9;
  v10 = v33;
  v23 = v9;
  WORD1(v9) = HIWORD(v22);
  LOWORD(v9) = 0;
  v22 = WORD2(v9) | (unsigned int)v9;
  v11 = *(v33 - 3);
  v21 = (char *)v11;
  if ( v11 )
  {
    v25 = 1;
    sub_6F8FE470(a9, v11, 0);
    v12 = (char *)*a9;
    if ( *(_DWORD *)(*a9 - 4) >= 0 )
    {
      sub_6F8FD0E0(a9);
      v12 = (char *)*a9;
    }
    v13 = *v19;
    v17 = v12;
    LODWORD(v16) = v33;
    HIDWORD(v16) = &v21[(_DWORD)v33];
    v14 = *(void (__thiscall **)(int *))(v13 + 44);
    v25 = 1;
    v14(v19);
    v10 = v33;
  }
  if ( _InterlockedExchangeAdd(v10 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0(v10 - 3, (int)&v32);
  sub_6F8A1AD0((int *)&v24);
  return v23;
}
