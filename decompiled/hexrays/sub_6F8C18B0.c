__int64 __thiscall sub_6F8C18B0(int this, int a2, int a3, char a4, int a5, char a6, _TBYTE a7)
{
  int v8; // [sp+0h] [bp-3Ch]@0
  _TBYTE v9; // [sp+1Ch] [bp-20h]@0

  LOBYTE(v8) = 0;
  *(double *)&v9 = *(double *)&a7;
  return sub_6F910150(v8, *(_DWORD *)(this + 8), a2, a3, (unsigned __int8)a4, a5, a6, v9, 0);
}
