unsigned int *__thiscall sub_6F8FE7A0(unsigned int *this, unsigned int a2, unsigned int a3, const void *a4, unsigned int a5)
{
  unsigned int v5; // edx@1
  unsigned int v6; // eax@1
  unsigned int v7; // ecx@2
  unsigned int v9; // eax@10
  char *v10; // eax@13
  int v11; // [sp+0h] [bp-78h]@1
  const void *v12; // [sp+4h] [bp-74h]@15
  char *v13; // [sp+8h] [bp-70h]@16
  int v14; // [sp+Ch] [bp-6Ch]@16
  size_t v15; // [sp+18h] [bp-60h]@10
  int v16; // [sp+1Ch] [bp-5Ch]@12
  char *v17; // [sp+20h] [bp-58h]@10
  int v18; // [sp+24h] [bp-54h]@4
  unsigned int *v19; // [sp+28h] [bp-50h]@1
  char v20; // [sp+2Ch] [bp-4Ch]@1
  int v21; // [sp+30h] [bp-48h]@6
  int (__cdecl *v22)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  __int16 *v23; // [sp+48h] [bp-30h]@1
  char *v24; // [sp+4Ch] [bp-2Ch]@1
  int (*v25)(); // [sp+50h] [bp-28h]@1
  int *v26; // [sp+54h] [bp-24h]@1
  char v27; // [sp+6Fh] [bp-9h]@16
  char v28; // [sp+70h] [bp-8h]@1

  v19 = this;
  v24 = &v28;
  v22 = sub_6F962A50;
  v23 = &word_6F96CAB6;
  v25 = sub_6F8FE9D5;
  v26 = &v11;
  sub_6F8A1A60((int *)&v20);
  v5 = *v19;
  v6 = *(_DWORD *)(*v19 - 12);
  if ( a2 > v6 )
  {
    v14 = *(_DWORD *)(*v19 - 12);
    v13 = (char *)a2;
    v21 = -1;
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::replace");
  }
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  v18 = v7;
  if ( a5 > v7 - v6 + 536870910 )
  {
    v21 = -1;
    sub_6F95B240("basic_string::replace");
  }
  if ( v5 > (unsigned int)a4 || (unsigned int)a4 > v5 + 2 * v6 || *(_DWORD *)(v5 - 4) > 0 )
  {
    v21 = -1;
    v19 = sub_6F8FD590(v19, a2, v18, a4, a5);
    goto LABEL_7;
  }
  v15 = 2 * a5;
  v17 = (char *)(2 * a2);
  v9 = *v19;
  if ( (unsigned int)a4 + 2 * a5 <= *v19 + 2 * a2 )
  {
    v16 = (signed int)((signed int)a4 - v9) >> 1;
LABEL_13:
    v21 = -1;
    sub_6F8FEC30((const void **)v19, a2, v18, a5);
    v10 = &v17[*v19];
    if ( a5 == 1 )
    {
      *(_WORD *)v10 = *(_WORD *)(*v19 + 2 * v16);
    }
    else if ( a5 )
    {
      v12 = (const void *)(*v19 + 2 * v16);
      memcpy(v10, v12, v15);
    }
    goto LABEL_7;
  }
  if ( (unsigned int)a4 >= v9 + 2 * (a2 + v18) )
  {
    v16 = a5 + ((signed int)((signed int)a4 - v9) >> 1) - v18;
    goto LABEL_13;
  }
  LOBYTE(v14) = 0;
  v13 = &v27;
  v21 = -1;
  v17 = (char *)sub_6F8FD210(a4, (int)a4 + 2 * a5);
  v21 = 1;
  v19 = sub_6F8FD590(v19, a2, v18, v17, a5);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 - 1, 0xFFFFFFFF) <= 0 )
    j_free_1(v17 - 12);
LABEL_7:
  sub_6F8A1AD0((int *)&v20);
  return v19;
}
