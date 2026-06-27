int __thiscall sub_6F93CF20(int this, int a2, unsigned int a3, const void *a4, unsigned int a5)
{
  int v5; // eax@1
  unsigned int v6; // edx@2
  int v7; // ebx@2
  unsigned int v8; // edi@2
  unsigned int v9; // ecx@3
  bool v10; // cl@5
  int v11; // eax@12
  unsigned int v13; // ebp@17
  bool v14; // ST1F_1@17
  char *v15; // ebp@18
  unsigned int v16; // eax@21
  signed int v17; // eax@35
  signed int v18; // ecx@35
  signed int v19; // ST18_4@37
  char *v20; // ebp@38
  void *v21; // [sp+10h] [bp-2Ch]@5
  unsigned int v22; // [sp+14h] [bp-28h]@5
  signed int v23; // [sp+14h] [bp-28h]@35
  unsigned int v24; // [sp+18h] [bp-24h]@2

  v5 = *(_DWORD *)(this + 4);
  if ( a5 > a3 + 0x3FFFFFFF - v5 )
    sub_6F95B240("basic_string::_M_replace");
  v6 = *(_DWORD *)this;
  v7 = this;
  v24 = a5 - a3;
  v8 = v5 + a5 - a3;
  if ( *(_DWORD *)this == this + 8 )
    v9 = 7;
  else
    v9 = *(_DWORD *)(this + 8);
  if ( v9 < v8 )
  {
    sub_6F93F200(v7, a2, a3, a4, a5);
    goto LABEL_12;
  }
  v21 = (void *)(v6 + 2 * a2);
  v22 = v5 - (a3 + a2);
  v10 = v5 != a3 + a2 && a3 != a5;
  if ( v6 <= (unsigned int)a4 && (unsigned int)a4 <= v6 + 2 * v5 )
  {
    if ( a5 && a3 >= a5 )
    {
      if ( a5 != 1 )
      {
        v13 = 2 * a5;
        v14 = v5 != a3 + a2 && a3 != a5;
        memmove(v21, a4, 2 * a5);
        if ( !v14 )
          goto LABEL_12;
        goto LABEL_18;
      }
      *(_WORD *)v21 = *(_WORD *)a4;
    }
    if ( !v10 )
    {
LABEL_20:
      if ( a3 >= a5 )
        goto LABEL_12;
      v16 = (unsigned int)v21 + 2 * a3;
      if ( v16 < (unsigned int)a4 + 2 * a5 )
      {
        if ( v16 > (unsigned int)a4 )
        {
          v17 = v16 - (_DWORD)a4;
          v23 = v17;
          v18 = v17 >> 1;
          if ( v17 >> 1 == 1 )
          {
            *(_WORD *)v21 = *(_WORD *)a4;
          }
          else if ( v18 )
          {
            v19 = v17 >> 1;
            memmove(v21, a4, v17);
            v18 = v19;
          }
          v20 = (char *)v21 + 2 * a5;
          if ( a5 - v18 == 1 )
          {
            *(_WORD *)((char *)v21 + v23) = *(_WORD *)v20;
          }
          else if ( a5 != v18 )
          {
            memcpy((char *)v21 + v23, v20, 2 * (a5 - v18));
          }
        }
        else if ( a5 == 1 )
        {
          *(_WORD *)v21 = *((_WORD *)a4 + v24);
        }
        else
        {
          memcpy(v21, (char *)a4 + 2 * v24, 2 * a5);
        }
        goto LABEL_12;
      }
      if ( a5 != 1 )
      {
        memmove(v21, a4, 2 * a5);
        goto LABEL_12;
      }
LABEL_26:
      *(_WORD *)v21 = *(_WORD *)a4;
      goto LABEL_12;
    }
    v13 = 2 * a5;
LABEL_18:
    v15 = (char *)v21 + v13;
    if ( v22 == 1 )
      *(_WORD *)v15 = *((_WORD *)v21 + a3);
    else
      memmove(v15, (char *)v21 + 2 * a3, 2 * v22);
    goto LABEL_20;
  }
  if ( v10 )
  {
    if ( v22 == 1 )
      *((_WORD *)v21 + a5) = *((_WORD *)v21 + a3);
    else
      memmove((char *)v21 + 2 * a5, (char *)v21 + 2 * a3, 2 * v22);
  }
  if ( a5 )
  {
    if ( a5 != 1 )
    {
      memcpy(v21, a4, 2 * a5);
      goto LABEL_12;
    }
    goto LABEL_26;
  }
LABEL_12:
  v11 = *(_DWORD *)v7;
  *(_DWORD *)(v7 + 4) = v8;
  *(_WORD *)(v11 + 2 * v8) = 0;
  return v7;
}
