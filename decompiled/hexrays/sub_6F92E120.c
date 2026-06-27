char *__thiscall sub_6F92E120(char *this, int a2)
{
  char *v2; // ebx@1
  volatile signed __int32 **v3; // ecx@1

  v2 = this;
  v3 = (volatile signed __int32 **)(this + 28);
  *(v3 - 6) = *(volatile signed __int32 **)(a2 + 4);
  *(v3 - 5) = *(volatile signed __int32 **)(a2 + 8);
  *(v3 - 4) = *(volatile signed __int32 **)(a2 + 12);
  *(v3 - 3) = *(volatile signed __int32 **)(a2 + 16);
  *(v3 - 2) = *(volatile signed __int32 **)(a2 + 20);
  *(v3 - 1) = *(volatile signed __int32 **)(a2 + 24);
  sub_6F9383B0(v3, (volatile signed __int32 **)(a2 + 28));
  return v2;
}
