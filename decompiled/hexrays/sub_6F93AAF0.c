_BYTE *__thiscall sub_6F93AAF0(int this, int a2)
{
  _BYTE *result; // eax@1
  _BYTE *v3; // edi@2
  _BYTE *v4; // esi@2
  int v5; // edx@2
  int v6; // ebp@3
  int v7; // edx@4
  int v8; // esi@5
  int v9; // edx@5
  int v10; // edi@9
  int v11; // ebp@16
  int v12; // edi@16
  int v13; // ST00_4@16
  int v14; // ST04_4@16

  result = (_BYTE *)a2;
  if ( this != a2 )
  {
    v3 = *(_BYTE **)this;
    v4 = *(_BYTE **)a2;
    v5 = a2 + 8;
    if ( this + 8 != *(_DWORD *)this )
    {
      v6 = *(_DWORD *)(this + 8);
      if ( (_BYTE *)v5 == v4 )
      {
        *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
        *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
        *(_DWORD *)a2 = v3;
        *(_DWORD *)this = this + 8;
      }
      else
      {
        *(_DWORD *)this = v4;
        v7 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v3;
        *(_DWORD *)(this + 8) = v7;
      }
      *(_DWORD *)(a2 + 8) = v6;
      v8 = *(_DWORD *)(a2 + 4);
      v9 = *(_DWORD *)(this + 4);
      goto LABEL_6;
    }
    if ( (_BYTE *)v5 != v4 )
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 8);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(this + 12);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(this + 16);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(this + 20);
      *(_DWORD *)this = v4;
      *(_DWORD *)a2 = v5;
      v9 = *(_DWORD *)(this + 4);
      *(_DWORD *)(this + 8) = v10;
      v8 = *(_DWORD *)(a2 + 4);
LABEL_6:
      *(_DWORD *)(this + 4) = v8;
      *(_DWORD *)(a2 + 4) = v9;
      return result;
    }
    v8 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(this + 4) )
    {
      if ( v8 )
      {
        v11 = *(_DWORD *)(a2 + 8);
        v12 = *(_DWORD *)(a2 + 12);
        v13 = *(_DWORD *)(a2 + 16);
        v14 = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 8);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(this + 12);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(this + 16);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(this + 20);
        v9 = *(_DWORD *)(this + 4);
        *(_DWORD *)(this + 12) = v12;
        *(_DWORD *)(this + 8) = v11;
        *(_DWORD *)(this + 16) = v13;
        *(_DWORD *)(this + 20) = v14;
        v8 = *(_DWORD *)(a2 + 4);
        goto LABEL_6;
      }
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 8);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(this + 12);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(this + 16);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(this + 20);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 4);
      result = *(_BYTE **)this;
      *(_DWORD *)(this + 4) = 0;
      *result = 0;
    }
    else
    {
      if ( !v8 )
      {
        v9 = 0;
        goto LABEL_6;
      }
      *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = 0;
      result = *(_BYTE **)a2;
      **(_BYTE **)a2 = 0;
    }
  }
  return result;
}
