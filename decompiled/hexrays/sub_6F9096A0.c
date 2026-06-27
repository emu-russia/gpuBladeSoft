unsigned int *__thiscall sub_6F9096A0(unsigned int *this, unsigned int a2, unsigned int a3, _BYTE *a4, size_t a5)
{
  unsigned int v5; // edx@1
  unsigned int v6; // eax@1
  unsigned int v7; // ecx@2
  unsigned int v9; // eax@10
  void *v10; // eax@13
  int v11; // [sp+0h] [bp-68h]@1
  _BYTE *v12; // [sp+4h] [bp-64h]@15
  char *v13; // [sp+8h] [bp-60h]@16
  int v14; // [sp+Ch] [bp-5Ch]@16
  _BYTE *v15; // [sp+10h] [bp-58h]@12
  int v16; // [sp+14h] [bp-54h]@4
  unsigned int *v17; // [sp+18h] [bp-50h]@1
  char v18; // [sp+1Ch] [bp-4Ch]@1
  int v19; // [sp+20h] [bp-48h]@6
  int (__cdecl *v20)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-34h]@1
  __int16 *v21; // [sp+38h] [bp-30h]@1
  char *v22; // [sp+3Ch] [bp-2Ch]@1
  int (*v23)(); // [sp+40h] [bp-28h]@1
  int *v24; // [sp+44h] [bp-24h]@1
  char v25; // [sp+5Fh] [bp-9h]@16
  char v26; // [sp+60h] [bp-8h]@1

  v17 = this;
  v22 = &v26;
  v20 = sub_6F962A50;
  v21 = &word_6F96AE96;
  v23 = sub_6F9098C3;
  v24 = &v11;
  sub_6F8A1A60((int *)&v18);
  v5 = *v17;
  v6 = *(_DWORD *)(*v17 - 12);
  if ( a2 > v6 )
  {
    v14 = *(_DWORD *)(*v17 - 12);
    v13 = (char *)a2;
    v19 = -1;
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::replace");
  }
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  v16 = v7;
  if ( a5 > v7 - v6 + 1073741820 )
  {
    v19 = -1;
    sub_6F95B240("basic_string::replace");
  }
  if ( v5 > (unsigned int)a4 || v5 + v6 < (unsigned int)a4 || *(_DWORD *)(v5 - 4) > 0 )
  {
    v19 = -1;
    v17 = sub_6F9085E0(v17, a2, v16, a4, a5);
    goto LABEL_7;
  }
  v9 = *v17;
  if ( (unsigned int)&a4[a5] <= *v17 + a2 )
  {
    v15 = &a4[-v9];
LABEL_13:
    v19 = -1;
    sub_6F909B10((const void **)v17, a2, v16, a5);
    v10 = (void *)(a2 + *v17);
    if ( a5 == 1 )
    {
      *(_BYTE *)v10 = v15[*v17];
    }
    else if ( a5 )
    {
      v12 = &v15[*v17];
      memcpy(v10, v12, a5);
    }
    goto LABEL_7;
  }
  if ( (unsigned int)a4 >= v9 + a2 + v16 )
  {
    v15 = &a4[a5] + -v9 - v16;
    goto LABEL_13;
  }
  LOBYTE(v14) = 0;
  v13 = &v25;
  v19 = -1;
  v15 = (_BYTE *)sub_6F908280(a4, &a4[a5]);
  v19 = 1;
  v17 = sub_6F9085E0(v17, a2, v16, v15, a5);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 - 1, 0xFFFFFFFF) <= 0 )
    j_free_1(v15 - 12);
LABEL_7:
  sub_6F8A1AD0((int *)&v18);
  return v17;
}
