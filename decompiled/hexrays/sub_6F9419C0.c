void *__thiscall sub_6F9419C0(void *this, int a2)
{
  int v2; // ebx@1
  char *v3; // ecx@3
  unsigned int v4; // eax@4
  unsigned int v5; // edi@5
  int v6; // esi@5
  _DWORD *v8; // edi@10
  _BYTE *v9; // eax@10
  char *v10; // eax@10
  int v11; // ebx@11
  _BYTE *v12; // edx@11
  int v13; // esi@11
  int v14; // edx@11
  unsigned int v15; // eax@14
  const void *v16; // eax@17
  int *v17; // edx@19
  unsigned int v18; // eax@19
  int v19; // ecx@23
  int v20; // [sp+0h] [bp-88h]@1
  _BYTE *v21; // [sp+10h] [bp-78h]@21
  _BYTE *v22; // [sp+14h] [bp-74h]@5
  void *v23; // [sp+18h] [bp-70h]@1
  char v24; // [sp+1Ch] [bp-6Ch]@1
  int v25; // [sp+20h] [bp-68h]@17
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-54h]@1
  __int16 *v27; // [sp+38h] [bp-50h]@1
  char *v28; // [sp+3Ch] [bp-4Ch]@1
  int (*v29)(); // [sp+40h] [bp-48h]@1
  int *v30; // [sp+44h] [bp-44h]@1
  int *v31; // [sp+58h] [bp-30h]@17
  size_t v32; // [sp+5Ch] [bp-2Ch]@17
  unsigned int v33; // [sp+60h] [bp-28h]@17
  char v34; // [sp+70h] [bp-18h]@1

  v28 = &v34;
  v23 = this;
  v26 = sub_6F962A50;
  v27 = &word_6F96ABD2;
  v29 = sub_6F941C48;
  v30 = &v20;
  sub_6F8A1A60((int *)&v24);
  v2 = *((_DWORD *)v23 + 8);
  if ( !(v2 & 0x10) )
    goto LABEL_25;
  if ( a2 == -1 )
  {
    v23 = 0;
    goto LABEL_9;
  }
  v3 = (char *)*((_DWORD *)v23 + 9);
  if ( v3 == (char *)v23 + 44 )
    v4 = 15;
  else
    v4 = *((_DWORD *)v23 + 11);
  v5 = *((_DWORD *)v23 + 6);
  v6 = *((_DWORD *)v23 + 4);
  v22 = (_BYTE *)*((_DWORD *)v23 + 5);
  if ( v5 - v6 >= v4 )
  {
    if ( v5 > (unsigned int)v22 )
    {
      *v22 = a2;
LABEL_8:
      ++*((_DWORD *)v23 + 5);
      v23 = (void *)a2;
      goto LABEL_9;
    }
    if ( v4 != 0x7FFFFFFF )
    {
      v15 = 2 * v4;
      if ( v15 <= 0x1FF )
      {
        v15 = 512;
      }
      else if ( (v15 & 0x80000000) != 0 )
      {
        v15 = 0x7FFFFFFF;
      }
      v32 = 0;
      v31 = (int *)&v33;
      LOBYTE(v33) = 0;
      v25 = 1;
      sub_6F93BF60((int)&v31, v15);
      v16 = (const void *)*((_DWORD *)v23 + 4);
      v22 = (_BYTE *)v32;
      if ( v16 )
      {
        sub_6F93A0E0((int)&v31, 0, v32, v16, *((_DWORD *)v23 + 6) - (_DWORD)v16);
        v22 = (_BYTE *)v32;
      }
      v17 = v31;
      v18 = 15;
      if ( (unsigned int *)v31 != &v33 )
        v18 = v33;
      v21 = v22 + 1;
      if ( (unsigned int)(v22 + 1) > v18 )
      {
        v25 = 1;
        sub_6F93C2B0((int)&v31, (size_t)v22, 0, 0, 1u);
        v17 = v31;
      }
      v19 = (int)v23;
      v22[(_DWORD)v17] = a2;
      v32 = (size_t)v21;
      v21[(_DWORD)v31] = 0;
      sub_6F93AAF0(v19 + 36, (int)&v31);
      sub_6F941550(
        (int)v23,
        *((_DWORD *)v23 + 9),
        *((_DWORD *)v23 + 2) - *((_DWORD *)v23 + 1),
        *((_DWORD *)v23 + 5) - *((_DWORD *)v23 + 4));
      if ( (unsigned int *)v31 != &v33 )
        j_free_1(v31);
      goto LABEL_8;
    }
LABEL_25:
    v23 = (void *)-1;
    goto LABEL_9;
  }
  v8 = v23;
  *((_DWORD *)v23 + 6) = &v3[v4];
  v9 = v22;
  v8[4] = v3;
  v10 = &v3[(_DWORD)&v9[-v6]];
  v8[5] = v10;
  if ( v2 & 8 )
  {
    v11 = v8[1];
    v12 = (_BYTE *)v8[3];
    v8[1] = v3;
    v22 = v12;
    v13 = (int)&v3[(_DWORD)&v12[-v11] + 1];
    v14 = v8[2];
    v8[3] = v13;
    v8[2] = &v3[v14] - v11;
  }
  *v10 = a2;
  ++*((_DWORD *)v23 + 5);
  v23 = (void *)a2;
LABEL_9:
  sub_6F8A1AD0((int *)&v24);
  return v23;
}
