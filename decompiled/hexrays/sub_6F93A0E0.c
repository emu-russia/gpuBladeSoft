int __thiscall sub_6F93A0E0(int this, int a2, size_t a3, const void *a4, size_t a5)
{
  int v5; // eax@1
  int v6; // ebx@2
  size_t v7; // edi@2
  unsigned int v8; // ecx@3
  bool v9; // cl@5
  int v10; // eax@12
  bool v12; // ST1C_1@17
  size_t v13; // eax@21
  size_t v14; // eax@35
  size_t v15; // ebp@35
  char *v16; // esi@38
  unsigned int v17; // [sp+1Ch] [bp-30h]@2
  void *v18; // [sp+20h] [bp-2Ch]@5
  size_t v19; // [sp+28h] [bp-24h]@5
  size_t v20; // [sp+2Ch] [bp-20h]@2

  v5 = *(_DWORD *)(this + 4);
  if ( a5 > a3 + 0x7FFFFFFF - v5 )
    sub_6F95B240("basic_string::_M_replace");
  v6 = this;
  v20 = a5 - a3;
  v7 = v5 + a5 - a3;
  v17 = *(_DWORD *)this;
  if ( *(_DWORD *)this == this + 8 )
    v8 = 15;
  else
    v8 = *(_DWORD *)(this + 8);
  if ( v8 < v7 )
  {
    sub_6F93C2B0(v6, a2, a3, a4, a5);
    goto LABEL_12;
  }
  v18 = (void *)(a2 + v17);
  v19 = v5 - (a3 + a2);
  v9 = v5 != a3 + a2 && a3 != a5;
  if ( v17 <= (unsigned int)a4 && (unsigned int)a4 <= v17 + v5 )
  {
    if ( a5 && a3 >= a5 )
    {
      if ( a5 != 1 )
      {
        v12 = v5 != a3 + a2 && a3 != a5;
        memmove(v18, a4, a5);
        if ( !v12 )
          goto LABEL_12;
        goto LABEL_18;
      }
      *(_BYTE *)v18 = *(_BYTE *)a4;
    }
    if ( !v9 )
    {
LABEL_20:
      if ( a3 >= a5 )
        goto LABEL_12;
      v13 = (size_t)v18 + a3;
      if ( (char *)v18 + a3 < (char *)a4 + a5 )
      {
        if ( v13 > (unsigned int)a4 )
        {
          v14 = v13 - (_DWORD)a4;
          v15 = v14;
          if ( v14 == 1 )
          {
            *(_BYTE *)v18 = *(_BYTE *)a4;
          }
          else if ( v14 )
          {
            memmove(v18, a4, v14);
          }
          v16 = (char *)v18 + a5;
          if ( a5 - v15 == 1 )
          {
            *((_BYTE *)v18 + v15) = *v16;
          }
          else if ( a5 != v15 )
          {
            memcpy((char *)v18 + v15, v16, a5 - v15);
          }
        }
        else if ( a5 == 1 )
        {
          *(_BYTE *)v18 = *((_BYTE *)a4 + v20);
        }
        else
        {
          memcpy(v18, (char *)a4 + v20, a5);
        }
        goto LABEL_12;
      }
      if ( a5 != 1 )
      {
        memmove(v18, a4, a5);
        goto LABEL_12;
      }
LABEL_26:
      *(_BYTE *)v18 = *(_BYTE *)a4;
      goto LABEL_12;
    }
LABEL_18:
    if ( v19 == 1 )
      *((_BYTE *)v18 + a5) = *((_BYTE *)v18 + a3);
    else
      memmove((char *)v18 + a5, (char *)v18 + a3, v19);
    goto LABEL_20;
  }
  if ( v9 )
  {
    if ( v19 == 1 )
      *((_BYTE *)v18 + a5) = *((_BYTE *)v18 + a3);
    else
      memmove((char *)v18 + a5, (char *)v18 + a3, v19);
  }
  if ( a5 )
  {
    if ( a5 != 1 )
    {
      memcpy(v18, a4, a5);
      goto LABEL_12;
    }
    goto LABEL_26;
  }
LABEL_12:
  v10 = *(_DWORD *)v6;
  *(_DWORD *)(v6 + 4) = v7;
  *(_BYTE *)(v10 + v7) = 0;
  return v6;
}
