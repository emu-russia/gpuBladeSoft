int __thiscall sub_6F8D9510(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // eax@1
  size_t v7; // eax@2
  size_t v8; // eax@2
  int v9; // eax@2
  int v11; // [sp+0h] [bp-8Ch]@1
  char *v12; // [sp+8h] [bp-84h]@1
  char v13; // [sp+Ch] [bp-80h]@1
  const wchar_t *v14; // [sp+1Ch] [bp-70h]@1
  const wchar_t *v15; // [sp+20h] [bp-6Ch]@1
  const wchar_t *v16; // [sp+24h] [bp-68h]@1
  const wchar_t *v17; // [sp+28h] [bp-64h]@1
  int v18; // [sp+2Ch] [bp-60h]@7
  void *v19; // [sp+30h] [bp-5Ch]@1
  const wchar_t *v20; // [sp+34h] [bp-58h]@1
  const wchar_t *v21; // [sp+38h] [bp-54h]@1
  char v22; // [sp+3Ch] [bp-50h]@1
  int v23; // [sp+40h] [bp-4Ch]@1
  int (__cdecl *v24)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-38h]@1
  int *v25; // [sp+58h] [bp-34h]@1
  char *v26; // [sp+5Ch] [bp-30h]@1
  int (__cdecl *v27)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // [sp+60h] [bp-2Ch]@1
  int *v28; // [sp+64h] [bp-28h]@1
  char v29; // [sp+7Fh] [bp-Dh]@1
  char v30; // [sp+80h] [bp-Ch]@1

  v19 = this;
  v26 = &v30;
  v24 = sub_6F962A50;
  v25 = &dword_6F96AED8;
  v27 = sub_6F8D96FD;
  v28 = &v11;
  sub_6F8A1A60((int *)&v22);
  v13 = 0;
  v12 = &v29;
  v23 = -1;
  v5 = sub_6F8FD210((const void *)a2, a3);
  v13 = 0;
  v20 = (const wchar_t *)v5;
  v12 = &v29;
  v23 = 1;
  v21 = (const wchar_t *)sub_6F8FD210((const void *)a4, a5);
  v15 = v21;
  v6 = *((_DWORD *)v20 - 3);
  v14 = v20;
  v16 = &v20[v6];
  v17 = &v15[*((_DWORD *)v15 - 3)];
  while ( 1 )
  {
    v18 = sub_6F8D94E0(v14, v15);
    if ( v18 )
      break;
    v7 = wcslen(v14);
    v14 += v7;
    v8 = wcslen(v15);
    v9 = (int)&v15[v8];
    if ( v16 == v14 && v17 == (const wchar_t *)v9 )
      break;
    if ( v16 == v14 )
    {
      v18 = -1;
      break;
    }
    if ( v17 == (const wchar_t *)v9 )
    {
      v18 = 1;
      break;
    }
    ++v14;
    v15 = (const wchar_t *)(v9 + 2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v21 - 6), (int)&v29);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v20 - 6), (int)&v29);
  sub_6F8A1AD0((int *)&v22);
  return v18;
}
