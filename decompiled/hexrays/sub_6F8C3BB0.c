signed int __thiscall sub_6F8C3BB0(int this, __int16 a2, signed int a3)
{
  signed int result; // eax@3

  if ( (unsigned __int16)a2 <= 0x7Fu && *(_BYTE *)(this + 12) )
  {
    result = *(_BYTE *)(this + (unsigned __int16)a2 + 13);
  }
  else
  {
    result = sub_6F8A37C0(a2);
    if ( result == -1 )
      result = a3;
  }
  return result;
}
