char __thiscall sub_6F957F30(_DWORD *this, int a2)
{
  _DWORD *v2; // esi@1
  int v3; // eax@5

  v2 = this;
  if ( sub_6F95CCE0(a2) )
    v2[31] = sub_6F95DC10(a2);
  else
    v2[31] = 0;
  if ( sub_6F95CF60(a2) )
    v2[32] = sub_6F95DF10(a2);
  else
    v2[32] = 0;
  LOBYTE(v3) = sub_6F95CEC0(a2);
  if ( (_BYTE)v3 )
  {
    v3 = sub_6F95DE50(a2);
    v2[33] = v3;
  }
  else
  {
    v2[33] = 0;
  }
  return v3;
}
