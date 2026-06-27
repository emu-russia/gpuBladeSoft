void __thiscall sub_6F955B00(int this)
{
  int v1; // ebx@1
  volatile signed __int32 *v2[4]; // [sp+1Ch] [bp-10h]@1

  v1 = this;
  *(_DWORD *)(this + 4) = 6;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 4098;
  sub_6F938250(v2);
  sub_6F9383B0((volatile signed __int32 **)(v1 + 108), v2);
  sub_6F938380(v2);
}
