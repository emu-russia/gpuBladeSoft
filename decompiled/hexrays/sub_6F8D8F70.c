int __thiscall sub_6F8D8F70(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // eax@1
  int v7; // ecx@1
  int v8; // ebp@1
  size_t v9; // eax@2
  size_t v10; // eax@2
  int v11; // eax@2
  int v13; // [sp+0h] [bp-8Ch]@1
  char *v14; // [sp+8h] [bp-84h]@1
  char v15; // [sp+Ch] [bp-80h]@1
  const char *v16; // [sp+1Ch] [bp-70h]@1
  const char *v17; // [sp+20h] [bp-6Ch]@1
  const char *v18; // [sp+24h] [bp-68h]@1
  int v19; // [sp+28h] [bp-64h]@1
  int v20; // [sp+2Ch] [bp-60h]@7
  void *v21; // [sp+30h] [bp-5Ch]@1
  const char *v22; // [sp+34h] [bp-58h]@1
  int v23; // [sp+38h] [bp-54h]@1
  char v24; // [sp+3Ch] [bp-50h]@1
  int v25; // [sp+40h] [bp-4Ch]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-38h]@1
  int *v27; // [sp+58h] [bp-34h]@1
  char *v28; // [sp+5Ch] [bp-30h]@1
  int (__cdecl *v29)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // [sp+60h] [bp-2Ch]@1
  int *v30; // [sp+64h] [bp-28h]@1
  char v31; // [sp+7Fh] [bp-Dh]@1
  char v32; // [sp+80h] [bp-Ch]@1

  v21 = this;
  v28 = &v32;
  v26 = sub_6F962A50;
  v27 = &dword_6F96B384;
  v29 = sub_6F8D914D;
  v30 = &v13;
  sub_6F8A1A60((int *)&v24);
  v15 = 0;
  v14 = &v31;
  v25 = -1;
  v5 = sub_6F908280((_BYTE *)a2, (_BYTE *)a3);
  v15 = 0;
  v22 = (const char *)v5;
  v14 = &v31;
  v25 = 1;
  v6 = sub_6F908280((_BYTE *)a4, (_BYTE *)a5);
  v7 = *(_DWORD *)(v6 - 12);
  v23 = v6;
  v17 = (const char *)v6;
  v8 = *((_DWORD *)v22 - 3);
  v16 = v22;
  v19 = v6 + v7;
  v18 = &v22[v8];
  while ( 1 )
  {
    v20 = sub_6F8D8F40(v16, v17);
    if ( v20 )
      break;
    v9 = strlen(v16);
    v16 += v9;
    v10 = strlen(v17);
    v11 = (int)&v17[v10];
    if ( v18 == v16 && v19 == v11 )
      break;
    if ( v18 == v16 )
    {
      v20 = -1;
      break;
    }
    if ( v19 == v11 )
    {
      v20 = 1;
      break;
    }
    ++v16;
    v17 = (const char *)(v11 + 1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v23 - 12), (int)&v31);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v22 - 12), (int)&v31);
  sub_6F8A1AD0((int *)&v24);
  return v20;
}
