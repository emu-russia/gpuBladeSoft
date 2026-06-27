int __thiscall sub_6F93F200(int this, int a2, int a3, const void *a4, int a5)
{
  int v5; // ebx@1
  unsigned int v6; // eax@2
  _WORD *v7; // eax@3
  _WORD *v8; // edi@3
  _WORD *v9; // ebp@3
  char *v10; // ecx@11
  int result; // eax@15
  int v12; // [sp+14h] [bp-38h]@1
  int v13; // [sp+18h] [bp-34h]@1
  int v14; // [sp+1Ch] [bp-30h]@1
  int v15; // [sp+2Ch] [bp-20h]@1

  v5 = this;
  v14 = a2 + a3;
  v12 = *(_DWORD *)(this + 4) - (a2 + a3);
  v15 = *(_DWORD *)(this + 4) + a5 - a3;
  v13 = this + 8;
  if ( v5 + 8 == *(_DWORD *)v5 )
    v6 = 7;
  else
    v6 = *(_DWORD *)(this + 8);
  v7 = sub_6F93F180((unsigned int *)&v15, v6);
  v8 = *(_WORD **)v5;
  v9 = v7;
  if ( a2 )
  {
    if ( a2 == 1 )
      *v7 = *v8;
    else
      memcpy(v7, *(const void **)v5, 2 * a2);
  }
  if ( a4 && a5 )
  {
    if ( a5 == 1 )
      v9[a2] = *(_WORD *)a4;
    else
      memcpy(&v9[a2], a4, 2 * a5);
  }
  if ( v12 )
  {
    v10 = (char *)&v9[a5 + a2];
    if ( v12 == 1 )
      *(_WORD *)v10 = v8[v14];
    else
      memcpy(v10, &v8[v14], 2 * v12);
  }
  if ( (_WORD *)v13 != v8 )
    j_free_1(v8);
  result = v15;
  *(_DWORD *)v5 = v9;
  *(_DWORD *)(v5 + 8) = result;
  return result;
}
